# avl-project

This repository contains starter code for the first COP3530 project at the University of Florida.
Edit `src/avl.cpp` to implement your self-balancing AVL tree, edit `test/test.cpp` to add to
or modify the Catch2 tests, and use the Makefile (or the standard g++ command line interface,
or a VSCode build task) to compile and run the tests.

You may need to edit `.vscode/settings.json` to get the TestMate Test Explorer to pick up your
test executable.

To use the Makefile type "make" into the terminal, without the "".
Be sure to look at the Makefile to understand what it is doing. 

What the Makefile does:
 * All it does is compile and run the file test.cpp which runs tests on the avl.cpp file. 
 * It checks which operating System the computer uses (MacOS/Windows) and adds the flag 
"-std=c++11" if the system is MacOS and otherwise omits it. Having or not having the 
flag would make the respective system angry so we accounted for that.


## Testing resources
 * Hamish's [Catch2 and VSCode demo](https://youtu.be/QNUj4IPVOPA)
 * Dhruv's [VSCode setup video](https://youtu.be/28aFQzlPrnE)
 * [Catch2 Tutorial](https://github.com/catchorg/Catch2/blob/v2.x/docs/tutorial.md#top)
 * [TestMate extension docs](https://marketplace.visualstudio.com/items?itemName=matepek.vscode-catch2-test-adapter)
