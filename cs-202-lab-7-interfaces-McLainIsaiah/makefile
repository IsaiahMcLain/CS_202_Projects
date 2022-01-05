animals: main.o Animal.o Cat.o Dog.o
	g++ -std=c++11 -o animals main.o Animal.o Cat.o Dog.o
main.o: main.cpp
	g++ -std=c++11 -c main.cpp
Animal.o: Animal.cpp Animal.h
	g++ -std=c++11 -c Animal.cpp
Cat.o: Cat.cpp Cat.h petable.h
	g++ -std=c++11 -c Cat.cpp
Dog.o: Dog.cpp Dog.h petable.h
	g++ -std=c++11 -c Dog.cpp
clean:
	rm *.o animals
