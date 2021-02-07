ifeq ($(OS),Windows_NT)
else
	CFLAGS="-std=c++11"
endif
make: 
	g++ $(CFLAGS) test/test.cpp -o AvlTests && ./AvlTests
