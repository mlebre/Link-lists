all:a.exe
a.exe: main.cpp node.o
	g++ -o a.exe -Wall main.cpp node.o

node.o: node.h node.cpp
	g++ -o node.o -c node.cpp


