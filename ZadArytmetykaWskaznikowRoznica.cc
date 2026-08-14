#include <iostream>

using namespace std;

int main() {
	int tablica[] = {1,2,3,4,5,6,7,8,9,10};
	cout << "Wskaznik na 4 idx: " << &tablica[4] << " " << &tablica[4] - &tablica[5] << endl;
	cout << &tablica[2] - &tablica[7] << endl;
	cout << &tablica[9] - &tablica[0] << endl;
	return 0;
}
