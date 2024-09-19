# Makefile for deque_demo

CXX = g++
CXXFLAGS = -Wall -std=c++11

# Target to compile the program
deque_demo: deque_demo.o
	$(CXX) $(CXXFLAGS) -o deque_demo deque_demo.o

# Compile the object file
deque_demo.o: deque_demo.cpp
	$(CXX) $(CXXFLAGS) -c deque_demo.cpp

# Clean up the compiled files
clean:
	rm -f *.o deque_demo
