# Flappy Bird Clone

## Build SFML for VC++

### Debug

```
git clone https://github.com/SFML/SFML.git
cd SFML
mkdir build
cd build
cmake -G"NMake Makefiles" -DCMAKE_BUILD_TYPE=Debug -DSFML_BUILD_NETWORK=0  ..
nmake
```

### MinSizeRel

```
git clone https://github.com/SFML/SFML.git
cd SFML
mkdir build
cd build
cmake -G"NMake Makefiles" -DCMAKE_BUILD_TYPE=MinSizeRel -DSFML_BUILD_NETWORK=0  ..
nmake
```