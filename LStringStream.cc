#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	string dane = "Jan Kowalski 2001 Styczen 14";

	stringstream ss(dane);

	string imie;
	string nazwisko;
	int rok;
	string miesiac;
	int dzien;

	ss >> imie >> nazwisko >> rok >> miesiac >> dzien;

	cout << "Dane obywatela:" << endl;
	cout << "Imie i nazwisko: " << imie << " " << nazwisko << endl;
	cout << "Data urodzenia: " << rok << " " << miesiac << " " << dzien << " " << endl;
	return 0;
}
