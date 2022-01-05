pet_manager: driver.o dog.o dogmanager.o dogtableprinter.o
	g++ -o pet_manager driver.o dog.o dogmanager.o dogtableprinter.o
driver.o: driver.cpp dog.h dogmanager.h dogtableprinter.h
	g++ -c driver.cpp
dog.o: dog.cpp
	g++ -c dog.cpp
dogmanager.o: dogmanager.cpp
	g++ -c dogmanager.cpp
dogtableprinter.o: dogtableprinter.cpp
	g++ -c dogtableprinter.cpp
clean:
	rm *.o pet_manager
