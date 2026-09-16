#include <iostream>
#include <string>

using namespace std;

struct Samolot {
	string nazwaModelu;
	int iloscMiejsc;
	int rokProdukcji;

	Samolot(string setNazwaModelu, int setIloscMiejsc, int setRokProdukcji)
		: nazwaModelu(setNazwaModelu), iloscMiejsc(setIloscMiejsc), rokProdukcji(setRokProdukcji) {}

	void pokazSpecyfikacje() {
		cout << "Specyfikacja dla samolotu " << nazwaModelu << ":" << endl;
		cout << "\t Ilosc miejsc: " << iloscMiejsc << endl;
		cout << "\t Rok produkcji: " << rokProdukcji << endl;
	}
};

int main() {
	
	Samolot samolot1("Boeing 737-800", 150, 2008);
	Samolot samolot2("Airbus A830", 140, 2010);

	samolot1.pokazSpecyfikacje();

	samolot1.nazwaModelu = "Boeing 737-800B";
	samolot1.iloscMiejsc = 152;

	cout << endl << "Po zmianie: " << endl;
	cout << "Nowa nazwa: " << samolot1.nazwaModelu << endl;
	cout << "Nowa ilosc miejsc: " << samolot1.iloscMiejsc << endl;

	cout << "Drugi samolot:" << endl;
	samolot2.pokazSpecyfikacje();

	return 0;
}
