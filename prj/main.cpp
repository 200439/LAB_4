#include <iostream>
#include <fstream>
#include <cstdlib>
#include "tablica.hh"
#include "heap.hh"
#include "quick.hh"
#include "zegar.hh"

using namespace std;
/*!
 * \file
 * \brief Plik glowny programu 
 *
 * Wczytuje tablice liczb z pliku "tablica" i sortuje je za pomoca dwoch algorytkow: sortowania przez kopcowanie oraz sortowania szybkiego.
 * Zapisuje czas dzialania algorytku do plikow wynik_tab.csv oraz wynik_tab_2.csv.
 */

int main() {

zegar watch;
	tablica T;
	T.wyswietl();

watch.start(); 
	heap_sort pierwszy(T);
watch.stop();

watch.zapisz_wynik("wynik_tab.csv");
watch.wyswietl();
	T.wyswietl();

cout<<endl;

zegar watch_2;
	tablica T2;
	T2.wyswietl();

watch_2.start();
	quick_sort drugi(T2);
watch_2.stop();

watch_2.zapisz_wynik("wynik_tab_2.csv");
watch_2.wyswietl();
	T2.wyswietl();

return 0;
}
