# C Example

This is just a basic example project, so you can see how you would set up documentation and CMake.

This is so I don't need to answer 1000 questions on how to structure your projects, build docs, or how to test :)

* Documentation: Doxygen
* Build: CMake
* Test: CTest (examples with no library or Unity)

At a low level you need to do two things.

Tell CMake where your files are, and tell it where and how you want it built

For example for this project uses ninja in debug, and Unix Makefiles for the release.
```shell
cd c_example

#Setup debug build dir
Cmake -G Ninja -S . -B build/debug

#Setup release build dir
Cmake -G "Unix Makefiles" -S . -B build/release

#Build debug directory
Cmake --build build/debug
#Build release directory
Cmake --build build/release

#Clean debug directory then build
cmake --build build/debug/ --clean-first
```

To run the tests I have set up in this directory
```shell
#For example to test the debug release
cd build/debug
ctest
```
one will fail and one will succeed. It's as simple as an assert statement and returning zero if it succeeds.

To build the docs you'll need Doxygen
```shell
sudo apt install doxygen
sudo apt install doxygen-gui
```

To use the gui just type in
```shell
doxygui
```
and it is relatively straightforward. Make sure to save your Doxyfile after you set it up so you can just run it like this without reconfiguring
```shell
cd docs
doxygen Doxyfile
```
then just open the index.html file made in the /build/html/ folder and see your site :)
