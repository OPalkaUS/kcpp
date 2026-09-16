#include <iostream>
using namespace std;

union Dane {
	int liczba;
	float liczba_f;
	char znak_rozdzielajacy;
};

int main() {
	Dane dane1;

	dane1.liczba = 123;

	cout << "Wszystkie dane unii dane1: " << endl;
	cout << "\t liczba = " << dane1.liczba << endl;
	cout << "\t liczba_f = " << dane1.liczba_f << endl;
	cout << "\t znak_rozdzielajacy = " << dane1.znak_rozdzielajacy << endl;

	cout << endl;
	
	dane1.liczba_f = 98.76f;
	cout << "Dane po nadpisaniu liczba_f" << endl;

	cout << "\t liczba = " << dane1.liczba << endl;
	cout << "\t liczba_f = " << dane1.liczba_f << endl;
	cout << "\t znak_rodzielajacy = " << dane1.znak_rozdzielajacy << endl;
	
	cout << endl;

	cout << "Rozmiary: " << endl;
	cout << "Rozmiar unii = " << sizeof(Dane) << endl;
	cout << " a rozmiar int i float kolejno: " << sizeof(int) << " " << sizeof(float) << endl;
	cout << "czyli cala unia ma wspolny obszar pamieci." << endl;
	return 0;
}
