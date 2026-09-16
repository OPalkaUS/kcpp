#include "Zad2.h"

#include <iostream>
using namespace std;

float& srednia_ref(float &a, float &b) {
	a = (a + b) / 2;
	return a;
}

float* max_value_wsk(float &a, float &b) {
	if (a > b) {
		return &a;
	}
	return &b;
}

float min_value_wart(float a, float b) {
	if (a > b) return b;
	return a;
}

int* get_fib_numbers(int size) {
	int* tab = new int[size];
	tab[0] = 1;
	tab[1] = 2;

	for (int i = 2; i<size; i++) {
		tab[i] = tab[i-1] + tab[i-2];
	}

	return tab;

}

void Zad2::Run() {
	float a = 5;
	float b = 10;
	srednia_ref(a, b);
	cout << "srednia z 5 i 10 to " << a << endl;

	float* max_value = max_value_wsk(a, b);
	cout << "wieksza liczba jest " << *max_value << endl;

	float min_value = min_value_wart(a, b);
	cout << "mniejsza liczba jest " << min_value << endl;
	cout << "(nasze 'a' to teraz srednia z 5 i 10)" << endl;

	int* fib_tab = get_fib_numbers(10);
	cout << "Kolejne liczby w ciagu fib.: ";
	for (int i=0; i<10; i++) {
		cout << fib_tab[i] << " ";
	}
	cout << endl;
}

