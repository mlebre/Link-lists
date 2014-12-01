all:a.out
a.out: test_class.cpp node.o image.o 
	g++ -o a.out -Wall test_class.cpp node.o image.o

node.o: node.h node.cpp image.h
	g++ -o node.o -c node.cpp 

image.o: image.cpp image.h
	g++ -o image.o -c image.cpp 


clean:
	rm *.o