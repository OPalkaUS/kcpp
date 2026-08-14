#include <iostream>


#define ROZMIAR_TAB 7
using namespace std;

int* kopiujTablice(const int* poczatekTab, int rozmiar) {
	int* newTab = new int[rozmiar]; 
	int* newTabWsk = newTab;
	const int* koniecTab = newTab + rozmiar;

	while (newTabWsk < koniecTab) {
		*newTabWsk = *poczatekTab;
		newTabWsk++;
		poczatekTab++;
	}
	return newTab;
}

int main() {
	int tab1[] = {5,10,15,1,4,4,1};
	int* tab2 = kopiujTablice(tab1, ROZMIAR_TAB);
	
	for (int i=0; i<ROZMIAR_TAB; i++) {
		cout << "index:" << i << " tab1:"<< tab1[i] << " tab2:" << tab2[i] << endl;
	}
	return 0;
}
