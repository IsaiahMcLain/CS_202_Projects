lab3: main.o complexnumber.o
	g++ -o lab3 main.o complexnumber.o
main.o: main.cpp
	g++ -c main.cpp
complexnumber.o: complexnumber.cpp complexnumber.h
	g++ -c complexnumber.cpp
clean:
	rm *.o lab3
