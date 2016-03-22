lab2-a:lab2-a.o main.o
	g++ -o lab2-a lab2-a.o main.o

lab2-a.o:lab2-a.cpp lab2-a.h
	g++ -c lab2-a.cpp

main.o:main.cpp lab2-a.h
	g++ -c main.cpp
