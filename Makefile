main: operations.o main.o menu.o
	g++ -o main main.o operations.o menu.o
operations.o: operations.cpp
	g++ -c operations.cpp
main.o: main.cpp
	g++ -c main.cpp
menu.o:menu.cpp
	g++ -c menu.cpp