#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	const double pi = M_PI;
	const double e = M_E;
	const double z_podzial = 1.16180339887; //Wpisane na sztywno
	
	cout << setw(15) << left << "Stała"
		<< setw(20) << "Wartosc (domyslnie)"
		<< setw(20) << "Notacja stala"
		<< setw(20) << "Notacja naukowa" << endl;
	cout << setfill('-') << setw(75) << "" << endl;
	cout << setfill(' ');
	cout << setw(15) << "PI"
		<< setw(20) << setprecision(6) << pi
		<< setw(20) << fixed << pi
		<< setw(20) << scientific << pi << endl;

	cout << defaultfloat;

	cout << setw(15) << "e"
                << setw(20) << setprecision(6) << e
                << setw(20) << fixed << e
                << setw(20) << scientific << e << endl;

	cout << defaultfloat;

	cout <<setw(15)  << "Zloty podzial"
                << setw(20) << setprecision(6) << z_podzial
                << setw(20) << fixed << z_podzial
                << setw(20) << scientific << z_podzial << endl;
	return 0;
}
