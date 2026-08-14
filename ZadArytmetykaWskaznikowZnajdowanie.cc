#include <iostream>

using namespace std;


int* maxElement(int* tablica, int size) {
	int* maxElem = tablica; //1 element w tablicy
	for (int i = 0; i<size; i++) {
		if (*maxElem < tablica[i]) {
			maxElem = &tablica[i];
		}
	}
	return maxElem;

}

int main() {
	int tab[] = {1,66, 131, 528, 232, 333, 2, 8};

	cout << "Najwiekszy elem = " << *maxElement(tab, 8) << endl;
	cout << "Tab address: " << tab << endl;
	cout << "Max elem tab address: " << maxElement(tab, 8) << endl;

	return 0;
}
