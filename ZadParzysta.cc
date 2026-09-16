#include <iostream>

using namespace std;

bool parzystaBit(int liczba) {

	//Jezeli na koncu liczby 
	//jest 0 a nie 1 w zapisie binarnym
	//to liczba jest parzysta
	// np. dla 6 = 110 jest 0 i jest parzysta
	// dla 7 = 111 jest 1 i jest nieparzysta
	// wystarczy sprawdzac liczba & 1
	
	return ((liczba & 1 ) == 0);
}

bool parzystaMod(int liczba) {

	return ((liczba % 2) == 0);
}

bool parzystaWar(int liczba) {
	return (liczba % 2 == 0) ? 1 : 0;
}


int main() {
	int liczba_input;

	cout << "Podaj liczbe do sprawdzenia: ";
	cin >> liczba_input;

	cout << "Bitowo: " 
		<< (parzystaBit(liczba_input) ? "Parzysta" : "Nieparzysta") << endl;	

	cout << "Modulo: "
		<< (parzystaMod(liczba_input) ? "Parzysta" : "Nieparzysta") << endl;

	cout << "Warunkowo: " << (parzystaWar(liczba_input) ? "Parzysta" : "Nieparzysta") << endl;
	return 0;
}
