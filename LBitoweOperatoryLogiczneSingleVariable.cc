#include <iostream>

using namespace std;

int binTabToDec(int tab[]) {
	int liczba = 0;
	for (int i = 0; i<8; i++) {
		if (tab[i] == 0) continue;
		int temp = 1;
		temp = temp << i;
		liczba = temp | liczba;
	}
	return liczba;
}

int main() {

	int tab[8];
	for (int i=0; i<8; i++) {
		cout << "Podaj 0 lub 1 ["<<i<<"]: ";
		cin >> tab[i];
	}
	cout << binTabToDec(tab) << endl;
	return 0;
}
