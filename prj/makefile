__start__: sortowanie
	./sortowanie

sortowanie: tablica.o heap.o quick.o zegar.o main.o
	c++ main.o tablica.o heap.o quick.o zegar.o -o sortowanie

tablica.o: tablica.cpp
	c++ -c tablica.cpp -o tablica.o

heap.o: heap.cpp
	c++ -c heap.cpp -o heap.o

quick.o: quick.cpp
	c++ -c quick.cpp -o quick.o

zegar.o: zegar.cpp
	c++ -c zegar.cpp -o zegar.o

main.o: main.cpp
	c++ -c main.cpp -o main.o

clean:
	rm -f *.o

