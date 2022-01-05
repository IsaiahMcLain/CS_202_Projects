person: main.o person.o heart.o
	g++ -o person main.o person.o heart.o
main.o: main.cpp
	g++ -c main.cpp
person.o: person.cpp person.h
	g++ -c person.cpp
heart.o: heart.cpp heart.h
	g++ -c heart.cpp
clean:
	rm *.o person
