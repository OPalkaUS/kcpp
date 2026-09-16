#include <iostream>
#include <fstream>

using namespace std;

int main() {

	string imie;
	string nazwisko;
	int wiek;

	cout << "Podaj imie: ";
	cin >> imie;

	cout << "Podaj nazwisko: ";
	cin >> nazwisko;
	
	cout << "Podaj wiek: ";
	cin >> wiek;
	cout << endl;

	cout << "System przyjal nastepujace dane: " << endl;
	cout << "Imie i naziwsko (wiek): " 
		<< imie << " " 
		<< nazwisko <<  " "
	       	<< "(" << wiek << ")" << endl;

	if (wiek < 0) {
		cerr << "ERROR: Wiek nie moze byc ujemny!" << endl;
		return 1; //Zwracamy inna wartosc niz 0 dla zakonczenia programu
	}

	ofstream plik("dane.txt");

	if (!plik) {
		cerr << "ERROR: nie mozna otworzyc pliku" << endl;
		return 2;
	}

	plik << imie << endl;
	plik << nazwisko << endl;
	plik << wiek << endl;
	plik.close();

	cout << "Dane zostaly pomyslnie zapisane do pliku!" << endl;

	ifstream plik2("dane.txt");

	if (!plik2) {
		cerr << "ERROR: Nie mozna otworzyc pliku!" << endl;
		return 3;
	}

	string imie_odczyt;
	string nazwisko_odczyt;
	int wiek_odczyt;

	plik2 >> imie_odczyt;
	plik2 >> nazwisko_odczyt;
	plik2 >> wiek_odczyt;
	plik2.close();

	cout << endl;
	cout << "System odczytal nastepujace dane z pliku:" << endl;
	cout << "Imie i nazwisko (wiek): "
		<< imie_odczyt << " "
		<< nazwisko_odczyt << " "
		<< "(" << wiek_odczyt << ")" << endl;

	return 0;
}
