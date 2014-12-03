all:a.out
a.out: main.cpp image.o  node.o link_list.o
	g++ -o a.out -Wall main.cpp node.o image.o

link_list.o:image.o node.o link_list.cpp link_list.h
	g++ -o link_list.o -c link_list.cpp

node.o: node.h node.cpp image.h
	g++ -o node.o -c node.cpp 

image.o: image.cpp image.h
	g++ -o image.o -c image.cpp 

clean:
	rm *.o
