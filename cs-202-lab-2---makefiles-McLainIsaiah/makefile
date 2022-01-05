averager: averager.o myfunctions.o
	g++ -o averager averager.o myfunctions.o
myfunctions.o: myfunctions.cpp myfunctions.h
	g++ -c myfunctions.cpp
averager.o: averager.cpp
	g++ -c averager.cpp
clean:
	rm *.o averager
