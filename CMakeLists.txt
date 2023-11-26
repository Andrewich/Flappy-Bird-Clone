cmake_minimum_required(VERSION 3.20)
project(FlappyBirdClone LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)
option(SFML_BUILD_NETWORK "Build network library" OFF)

ADD_DEFINITIONS(-DUNICODE)
ADD_DEFINITIONS(-D_UNICODE)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

set(SOURCE_EXE src/main.cpp
               src/Game.h
               src/Game.cpp
               src/GameObject.h
               src/Sprite.h
               src/Sprite.cpp
               src/Background.h
			   src/Background.cpp
               src/Ground.h
               src/Ground.cpp)

add_executable(flappy_bird ${SOURCE_EXE})
target_link_libraries(flappy_bird PRIVATE sfml-graphics
                                          sfml-main)
target_compile_features(flappy_bird PRIVATE cxx_std_17)

if(WIN32)
    target_link_options(flappy_bird PRIVATE -subsystem:windows)
    add_custom_command(
        TARGET flappy_bird
        COMMENT "Copy OpenAL DLL"
        PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<EQUAL:${CMAKE_SIZEOF_VOID_P},8>,x64,x86>/openal32.dll $<TARGET_FILE_DIR:flappy_bird>        
        VERBATIM)
    add_custom_command(
        TARGET flappy_bird
        COMMENT "Copy Resources"
        POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_SOURCE_DIR}/res $<TARGET_FILE_DIR:flappy_bird>/res
        VERBATIM)
endif()

install(TARGETS flappy_bird)