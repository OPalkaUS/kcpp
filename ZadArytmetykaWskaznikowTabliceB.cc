#include <iostream>

using namespace std;

int main() {
	int tab1[5];
	int tab2[5];
	int tab3[5];
	int usr_input;
	for (int i=0; i<5; i++) {
		cout << "Podaj wartosc dla [" << i << "]: ";
		cin >> usr_input;
		*(tab1 + i) = usr_input;
		*(tab2 + i) = usr_input * 2;
		*(tab3 + i) = usr_input + usr_input*2; // lub *(tab1 + i) + *(tab2 + i)   :)
	}

	//Wyswietlanie wszyskiego przez iteracje
	cout << "Wyswietlanie wartosci w formacie tab1 | tab2 | tab3" << endl;
	for (int i=0; i<5; i++) {
		cout << tab1[i] << " | " << tab2[i] << " | " << tab3[i] << endl;
	}

	return 0;
}
