#include"heap.hh"

using namespace std;

void heap_sort::zbuduj_kopiec(int *tablica) {
	rozmiar_kopca=dlugosc;
	for(int i=floor(dlugosc/2); i>=1; i--)
	{
      kopiec(tablica, i);
	}
}	

void heap_sort::kopiec(int *tablica, int i) {
	int l = 2*i;
   	int r = 2*i+1;
	int najwiekszy, tmp;

if ((l<=rozmiar_kopca)&&(tablica[l]>tablica[i])) 
	{najwiekszy = l;}
	else najwiekszy = i;
		if ((r<=rozmiar_kopca)&&(tablica[r]>tablica[najwiekszy]))  
		{najwiekszy = r;}

   if(najwiekszy != i)
   {
      tmp = tablica[najwiekszy];
      tablica[najwiekszy] = tablica[i];
      tablica[i] = tmp;
      kopiec(tablica, najwiekszy);
   }
}

void heap_sort::sortowanie(int *tablica)
{
   int tmp, i;

   zbuduj_kopiec(tablica);
   for(i=dlugosc; i>=2; i--)
   {
      tmp = tablica[1];
      tablica[1] = tablica[i];
      tablica[i] = tmp;

      rozmiar_kopca--;
      kopiec(tablica, 1);
   }
}
