#include <iostream>

using namespace std;

void fun_a(int ilosc, int i_ignore, int i_stop) {
	cout << "=== Pętla while ===" << endl;
	int i = 0;
	while (i<ilosc) {
		if (i == i_stop) {
			break;
		}
		if (i == i_ignore) {
			i++;
			continue;
		}
		cout << "Warunek (i < ilosc): i = " << i
			<< " i++ = " << i++ 
			<< " ++i = " << ++i << endl;
	}
}

void fun_b(int ilosc, int i_ignore, int i_stop) {
	cout << "=== Petla do-while ===" << endl;
	int i = 0;

	do {
		cout << "i = " << i << " i++ = " << i++ << " ++i = " << ++i << endl;
		if (i == i_ignore) {
			i++;
			continue;
		}
	}
	while (i < ilosc);
}


void fun_c(int tab[], int ilosc) {
	cout << "=== Petla FOR ===" << endl;

	for (int i = 0; i<ilosc; i++) {
		if (i%2 == 0) {
			continue;
		}
		cout << "Parzysta liczba z tablicy: " << tab[i] << endl;
	}
}


int main() {
	fun_a(10, 3, 8);
	fun_b(10, 3, 8);
	int tab[] = {5, 8, 13, 22, 5, 2};
	fun_c(tab, 6);

	return 0;
}
