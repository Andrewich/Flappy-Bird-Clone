# Flappy Bird Clone

## Build

### Windows

```
cmake -S . -B build
cmake --build build --config Debug
```

### Linux

```
sudo apt update
sudo apt install \
    libxrandr-dev \
    libxcursor-dev \
    libudev-dev \
    libfreetype-dev \
    libopenal-dev \
    libflac-dev \
    libvorbis-dev \
    libgl1-mesa-dev \
    libegl1-mesa-dev

cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

## Links

- https://github.com/SFML/cmake-sfml-project/tree/master