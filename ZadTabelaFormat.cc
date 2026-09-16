#include <iostream>
#include <iomanip>


using namespace std;

int main() {
	cout << "|" << left << setw(15) << " Nazwa"
		<< "|" << right << setw(8) << "Cena "
		<< "|" << right << setw(7) << "Ilosc " << "|" << endl;

	cout << "|" << setfill('-') << left << setw(15) << ""
                << "|" << right << setw(8) << ""
                << "|" << right << setw(7) << "" << "|" << endl;
	
	cout << setfill(' ');

	cout << "|" << left << setw(15) << " Chleb"
                << "|" << right << setw(8) << setprecision(2) << 4.99
                << "|" << right << setw(7) << 5 << "|" << endl;

	cout << "|" << left << setw(15) << " Mleko"
                << "|" << right << setw(8) << setprecision(2) << 3.20
                << "|" << right << setw(7) << 10 << "|" << endl;

	cout << "|" << left << setw(15) << " Jajka (10 szt)"
                << "|" << right << setw(8) << setprecision(2) << 8.50
                << "|" << right << setw(7) << 3 << "|" << endl;
	return 0;
}
