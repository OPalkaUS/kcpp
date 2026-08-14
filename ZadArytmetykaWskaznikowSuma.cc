#include <iostream>

using namespace std;

int suma(int* tab, int size) {
	int sum = 0;
	for (int i=0; i<size; i++) {
		sum += tab[i];
	}
	return sum;
}


int main() {
	int tablica[] = {1,5,10,11,24,3,7};
	int wynik = suma(tablica, 7);
	cout << "Suma = " << wynik << endl;


	return 0;
}
