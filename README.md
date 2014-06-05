FlopFlip
=========

Welcome to the FlopFlip repository. These contains a several components:

* FlopFlip Compiler - Used to generate FlopFlip bytecode
* FlopFlip IDE - Used to generate FlopFlip bytecode from GUI
* FlopFlip VM - The virtual machine required to run FlopFlip code. You can embed it on your application. In fact, you should embed it to run bytecode.
* FlopFlip docs - Documentation
* FlopFlip Runtime - The runtime library for FlopFlip bytecode. It provides some useful functions.
* FlopFlip Examples - Some examples
* FlopFlip Console - A command line application that embeds FlopFlip and runs the bytecode inside.

#Design

FlopFlip was designed as a simple stack based virtual machine. It can be used to run bytecode for special apps that doesn't require a full language.
FlopFlip was specifically designed to run scripts created by Graphical Applications like Scratch and not a Text Language like Java.

#Build

FlopFlip is tested under:

* Linux
* Windows
* NetBSD
* Haiku

You only need a C++ compiler and cmake. Build it with 

```sh
mkdir build && cd build
cmake ..
make
(sudo) make install
```
