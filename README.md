# avl-project

This repository contains starter code for the first COP3530 project at the University of Florida.
We have made this resource available to make it easier to use Catch2 to test your project's code.
This repository has been designed to work in VS Code. Download this repository to get started!

Be sure to check out the testing resources at the bottom on how to use Catch2, VSCode, and TestMate.

Edit `src/avl.cpp` to implement your self-balancing AVL tree, edit `test/test.cpp` to add to
or modify the Catch2 tests, and use the Makefile (or the standard g++ command line interface,
or a VSCode build task) to compile and run the tests.

# TestMate Information
You may need to edit `.vscode/settings.json` to get the TestMate Test Explorer to pick up your
test executable. Your program's executable (i.e. a.out, AvlTests, a.exe, etc.) name should match 
exactly what it shows in settings.json. We have provided several possible options if you look at 
settings.json, you can add a new one to the list. The settings.json file is used to link with Testmate.

# Makefile Explanation
To use the Makefile type `make` into the terminal.
Be sure to look at the Makefile to understand what it is doing. 
Make sure you are in the same directory as the Makefile when you run make. 
You can check by typing `ls` into the terminal.

What the Makefile does:
 * All it does is compile then run `test/test.cpp` which runs tests on `src/avl.cpp` with Catch2. 
 * It checks which operating system the computer uses (MacOS/Windows) and omits the flag 
`"-std=c++11"` if the system is Windows and otherwise adds it. Having or not having the 
flag can make the respective systems angry, so we accounted for that.

Use this link for a refresher on compiling programs using GNU:
 * [Geeks for Geeks](https://www.geeksforgeeks.org/compiling-with-g-plus-plus/)

## Testing Resources
 * Hamish's [Catch2 and VSCode demo](https://youtu.be/QNUj4IPVOPA)
 * Dhruv's [VSCode setup video](https://youtu.be/28aFQzlPrnE)
 * [Catch2 Tutorial](https://github.com/catchorg/Catch2/blob/v2.x/docs/tutorial.md#top)
 * [TestMate extension docs](https://marketplace.visualstudio.com/items?itemName=matepek.vscode-catch2-test-adapter)
