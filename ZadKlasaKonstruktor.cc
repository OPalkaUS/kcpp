#include <iostream>

using namespace std;

class Samochod {

	private:
		string marka;
		int rocznik;
		int przebieg;
	public:
		
		Samochod() {
			marka = "Opel";
			rocznik = 2026;
			przebieg = 0;
			cout << "Utworzono domyslny samochod!" << endl;
		}

		Samochod(string a_marka, int a_rocznik, int a_przebieg) {
			marka = a_marka;
			rocznik = a_rocznik;
			przebieg = a_przebieg;
			if (a_przebieg < 0) {
				cout << "WARNING: Przebieg nie moze byc ujemny!" << endl;
				przebieg = 0;
			}
		}

		~Samochod() {
			cout << "Usunieto pojazd marki " << marka << endl;
		}

		int set_przebieg(int a_przebieg) {
			if (a_przebieg < przebieg) {
				cout << "WARNING: Nie mozna cofać przebiegu!" << endl;
				return przebieg;
			}
			przebieg = a_przebieg;
			return przebieg;
		}

		int get_przebieg() {
			return przebieg;
		}

		string get_marka() {
			return marka;
		}

		int get_rocznik() {
			return rocznik;
		}

		void info() {
			cout << "Pojazd marki " << marka << " " << rocznik << " (" << przebieg << " km)" << endl;
		}
};

int main() {
	Samochod opelek1;
	opelek1.info();

	Samochod skoda1("Skoda", 2013, 55);
	skoda1.info();
	skoda1.set_przebieg(22);
	skoda1.set_przebieg(133);
	cout << "Po zmianie przebiegu: " << endl;
	skoda1.info();
	cout << endl << "=== Koniec programu ===" << endl;
	//Na koncu programu powinno wyczyscic wszystkie obiekty
	return 0;
}
