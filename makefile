CC = g++
Flags = -std=c++14 - Wall - g
OBJS = Date.o Employee.o Programmer.o SoftwareArchitect.o

all: hw03

hw03: hw03.cpp Date.o Employee.o Programmer.o SoftwareArchitect.o
	$(CC) $(FLAGS) hw03.cpp -o hw03 $(OBJS)

Date.o: Date.cpp Date.h
	$(CC) $(FLAGS) -c Date.cpp -o Date.o

Employee.o: Employee.cpp Employee.h
	$(CC) $(FLAGS) -c Employee.cpp -o Employee.o

Programmer.o: Programmer.cpp Programmer.h
	$(CC) $(FLAGS) -c Programmer.cpp -o Programmer.o

SoftwareArchitect.o: SoftwareArchitect.cpp SoftwareArchitect.h
	$(CC) $(FLAGS) -c SoftwareArchitect.cpp -o SoftwareArchitect.o

clean:
	rm*.o hw03 hw03.tar

tar:
	tar cf hw03.tar hw03.scr makefile hw03.cpp Date.cpp Date.h Employee.cpp Employee.h Programmer.cpp Programmer.h SoftwareArchitect.cpp SoftwareArchitect.h 
