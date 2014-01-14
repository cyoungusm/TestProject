all:
	echo YAY

Simple: Simple.cpp Class1.h Class1.cpp Class2.h Class2.cpp
	g++ -o Simple Simple.cpp Class1.cpp Class2.cpp
