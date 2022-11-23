prog : main.o ArbreB.o Element.o Noeud.o
	g++ main.o ArbreB.o Element.o Noeud.o -o main

main.o : main.cpp ArbreB.h Element.h
	g++ -g -Wall -c main.cpp -o main.o

ArbreB.o : ArbreB.cpp ArbreB.h Element.h
	g++ -g -Wall -c ArbreB.cpp -o ArbreB.o

Element.o : Element.cpp Element.h
	g++ -g -Wall -c Element.cpp -o Element.o

Noeud.o : Noeud.cpp Noeud.h
	g++ -g -Wall -c Noeud.cpp -o Noeud.o
