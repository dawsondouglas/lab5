person: main.o stomach.o heart.o person.o
	g++ -std=c++11 -o person main.o stomach.o heart.o person.o

main.o: main.cpp stomach.h person.h
	g++ -c -std=c++11 main.cpp

stomach.o: stomach.cpp stomach.h
	g++ -c -std=c++11 stomach.cpp

heart.o: heart.cpp heart.h
	g++ -c -std=c++11 heart.cpp

person.o: person.cpp person.h
	g++ -c -std=c++11 person.cpp

clean:
	rm *.o person