#include <iostream>

using namespace std;

struct Samochod {
	string marka;
	int przebieg;
	int rok;

	Samochod() {
		marka = "Brak";
		rok = 0;
		przebieg = 0;
	}

	Samochod(string marka_a, int przebieg_a, int rok_a) : marka(marka_a), przebieg(przebieg_a), rok(rok_a) {
		cout << "Konstruktor z argumentami!" << endl;
	}

	~Samochod() {
		cout << "Dekonstruktor samochodu " << marka << " - wykonano" << endl;
	}


};

int main() {
	Samochod samochod1;
	cout << "Samochod marki " << samochod1.marka << " przebieg " << samochod1.przebieg << endl;

	Samochod opel1{"Opel", 233555, 2003};
	cout << "Samochod marki " << opel1.marka << " przebieg: " << opel1.przebieg << " rocznik " << opel1.rok << endl;
	return 0;
}
