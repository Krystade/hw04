CC = g++
Flags = -std=c++14 - Wall - g
OBJS = Date.o Employee.o Programmer.o SoftwareArchitect.o

all: hw04

hw04: hw04.cpp Date.o Employee.o Programmer.o SoftwareArchitect.o
	$(CC) $(FLAGS) hw04.cpp -o hw04 $(OBJS)

Date.o: Date.cpp Date.h
	$(CC) $(FLAGS) -c Date.cpp -o Date.o

Employee.o: Employee.cpp Employee.h
	$(CC) $(FLAGS) -c Employee.cpp -o Employee.o

Programmer.o: Programmer.cpp Programmer.h
	$(CC) $(FLAGS) -c Programmer.cpp -o Programmer.o

SoftwareArchitect.o: SoftwareArchitect.cpp SoftwareArchitect.h
	$(CC) $(FLAGS) -c SoftwareArchitect.cpp -o SoftwareArchitect.o

clean:
	rm*.o hw04 hw04.tar

tar:
	tar cf hw04.tar hw04.scr makefile hw04.cpp Date.cpp Date.h Employee.cpp Employee.h Programmer.cpp Programmer.h SoftwareArchitect.cpp SoftwareArchitect.h 
