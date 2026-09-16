#include "Zad1.h"

#include <iostream>
#include <string>
using namespace std;

extern "C" {

	float fPole_kwadratu(float a){
		return a*a;
	}

	void wypisz_pole(float pole) {
		cout << "Pole kwadratu to: " << pole << endl;
	}
}

int pole_kwadratu(int a) {
	return a * a;
}

float obwod_prostokatu(float a, float b) {
	return a*2 + b*2;
}

float szybki_pierwiastek(float liczba) {
	float liczba_max = liczba;
	float liczba_min = 0;

	float srodek = 0;
	for (int i=0; i<20; i++) {
		srodek = liczba_min + (liczba_max - liczba_min) / 2;
		if (srodek * srodek > liczba) {
			liczba_max = srodek;
		} else {
			liczba_min = srodek;
		}
	}
	return srodek;
}

void Zad1::Run() {
	cout << szybki_pierwiastek(2) << endl;
	wypisz_pole(fPole_kwadratu(5));
	cout << "Obowd prostokatu 2.5 x 3.3 = " << obwod_prostokatu(2.5, 3.3) << endl;
}

