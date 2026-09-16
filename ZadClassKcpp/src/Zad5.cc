#include "Zad5.h"

#include <iostream>

using namespace std;

int getTabSum(int *startTab, int rozmiar) {
	int sum = 0;
	for (int i=0; i<rozmiar; i++) {
		sum += *(startTab + i);
	}
	return sum;
}

int *getTabMaxElem(int *startTab, int rozmiar) {
	int* maxElem = startTab;
	for (int i=0; i<rozmiar; i++) {
		if (*(startTab + i) > *maxElem) maxElem = startTab + i;
	}

	return maxElem;
}

void rotateTab(int *startTab, int rozmiar) {
	int *endTab = startTab + rozmiar-1;
	int temp = 0;
	for (int i=0; i<rozmiar/2; i++) {
		temp = *(startTab + i);
		*(startTab + i) = *(endTab - i);
	       	*(endTab - i) = temp;
	}
}

void showTab(int tab[], int rozmiar) {
	for (int i=0; i<rozmiar; i++) {
		cout << "Index: " << i << " Wartosc: " << tab[i] << endl;
	}

}

void Zad5::Run() {

	int tab[] = {1,2,3,4,5,6,7,8,9,10}; //10 Elementow
 	int suma = getTabSum(tab, 10);
	cout << "Suma elementow z tablicy: " << suma << endl;
	int* maxElem = getTabMaxElem(tab, 10);
	cout << "Najwiekszy element jest pod adresem " << maxElem << " o wartosci "<< *maxElem << endl;
	rotateTab(tab, 10);
	cout << "Tablica po odwroceniu: " << endl;
	showTab(tab, 10);
}
