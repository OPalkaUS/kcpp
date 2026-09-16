#include <iostream>

using namespace std;

int main() {

	double a;
	double b;

	cout << "Program wykonuje operacje na dwóch liczbach." << endl;
	cout << "a oraz b." << endl;

	cout << "Podaj a: ";
	cin >> a;
	
	cout << "Podaj b: ";
	cin >> b;

	cout << "Wybierz operacje do wykonania. Wpisz co chcesz wykonać" << endl;
	cout << "Do wyboru: (d)odawanie, (o)dejmowanie, (m)nozenie, (D)zielenie" << endl;

	char usr_input;
	cout << "Co chcesz zrobić?: ";
	cin >> usr_input;
	switch (usr_input) {
		case 'd':
			cout << "Wynik: " << (a + b) << endl;
			break;
		case 'o':
			cout << "Wynik: " << (a-b) << endl;
			break;
		case 'm':
			cout << "Wynik: " << (a*b) << endl;
			break;
		case 'D':
		       cout << "Wynik: " << (a/b) << endl;
		       break;
		default:
		       cout << "ERROR: Nieprawidłowa opcja!" << endl;


	}
	return 0;
}
