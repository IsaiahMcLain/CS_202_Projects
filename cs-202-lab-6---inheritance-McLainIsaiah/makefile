boats: main.o boat.o sailboat.o
	g++ -o boats main.o boat.o sailboat.o
main.o: main.cpp
	g++ -c main.cpp
boat.o: boat.cpp boat.h
	g++ -c boat.cpp
sailboat.o: sailboat.cpp sailboat.h
	g++ -c sailboat.cpp 
clean:
	rm *.o boats
