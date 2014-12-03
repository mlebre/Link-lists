all:a.out
a.out: main.cpp image.o  node.o
	g++ -o a.out -Wall main.cpp node.o image.o

image.o: image.cpp image.h
	g++ -o image.o -c image.cpp image.o

node.o: node.h node.cpp image.h
	g++ -o node.o -c node.cpp 


clean:
	rm *.o
