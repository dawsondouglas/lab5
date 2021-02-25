person: main.o stomach.o
	g++ -std=c++11 -o person main.cpp stomach.cpp

main.o: main.cpp stomach.h
	g++ -c -std=c++11 main.cpp

stomach.o: stomach.cpp stomach.h
	g++ -c -std=c++11 stomach.cpp

clean:
	rm *.o person