

// To compile and run the program

# Makefile to compile the Library Management System

CXX = g++
CXXFLAGS = -std=c++11
TARGET = library_system

OBJS = library_system.o book.o user.o transaction.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

library_system.o: library_system.cpp
	$(CXX) $(CXXFLAGS) -c library_system.cpp

book.o: book.cpp
	$(CXX) $(CXXFLAGS) -c book.cpp

user.o: user.cpp
	$(CXX) $(CXXFLAGS) -c user.cpp

transaction.o: transaction.cpp
	$(CXX) $(CXXFLAGS) -c transaction.cpp

clean:
	rm -f *.o $(TARGET)
