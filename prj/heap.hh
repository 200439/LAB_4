#ifndef HEAP_HH
#define HEAP_HH
#include <cstdlib>
#include <iostream>
#include <cmath>
#include"tablica.hh"

using namespace std;

/*!
 * \file
 * \brief Definicja klasy heap_sort (sortowanie przez kopcowanie)
 *
 */

/*! \brief Definicja klasy heap_sort
 * 
 */
class heap_sort {
	public:
	int rozmiar_kopca;
	int dlugosc;

	void zbuduj_kopiec(int *tablica);
	void kopiec(int *tablica, int i);
	void sortowanie(int *tablica);

	heap_sort(tablica &Tab) {dlugosc=Tab.ilosc-1, sortowanie(Tab.tab_1);}
};
#endif
