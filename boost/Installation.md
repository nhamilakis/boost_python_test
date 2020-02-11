# Install dependencies

### Python

- Native (no venv) python installation 3.6+ recommended.
- libpython-dev (ubuntu): 

> `sudo apt install python3-dev`

### gcc, g++ cmake

> Note in ubuntu install cmake from snap (its more recent)

# Install boost

### Ubuntu

install via apt :

- add ppa from [here](https://launchpad.net/~mhier/+archive/ubuntu/libboost-latest)

```bash
$ sudo add-apt-repository ppa:mhier/libboost-latest
$ sudo apt update
```

- install

```bash
$ sudo apt install libboost-dev
$ sudo apt install libboost-all-dev
```

## Configure makefile for boost 

Example cmake for compiling modules see [CMakeLists.txt](CMakeLists.txt)

sources : 
- [official cmake documentation](https://cmake.org/cmake/help/latest/module/FindBoost.html)
- [github examples on wrapping c++ in python](https://github.com/TNG/boost-python-examples)
- SO issues:
    
    - https://stackoverflow.com/questions/15291500/i-have-2-versions-of-python-installed-but-cmake-is-using-older-version-how-do
    
    - https://stackoverflow.com/questions/15188760/cmake-link-with-libboost-python-py32-so-instead-of-libboost-python-so 


