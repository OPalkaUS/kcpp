#include <iostream>

#include "Zad1.h"
#include "Zad2.h"
#include "Zad3.h"
#include "Zad4.h"
#include "Zad5.h"
#include "Zad6.h"
#include "Zad7.h"
#include "Zad8.h"
#include "Zad9.h"
#include "Zad10.h"

using namespace std;

int main() {
	int wybor_zadania;

	Zad1 zad1;
	Zad2 zad2;
	Zad3 zad3;
	Zad4 zad4;
	Zad5 zad5;
	Zad6 zad6;
	Zad7 zad7;
	Zad8 zad8;
	Zad9 zad9;
	Zad10 zad10;


	do {
		cout << endl << "=======================";
		cout << "\t\tWybierz zadanie" << endl;
		cout << "=====================" << endl;
		cout << "1. Zadanie 1.4 - 5 funkcji z czego dwie jako extern \"C\"" << endl;
		cout << "2. Zadanie 2.1 - 4 funkcje z czego kazda zwraca przez wartosc, referencje, wskaznik, tablice" << endl;
		cout << "3. Zadanie 2.4 - przeciazenie operatora \"+\" dla klasy Punkt" << endl;
		cout << "4. Zadanie 3.4 - przesuniecie tablicy w o 1 miejsce w prawo wykorzystujac wskazniki" << endl;
		cout << "5. Zadanie 3.8 - obliczanie sumy, min, max z tablicy 10 wartosci i odwracanie tablicy za pomoca wskaznikow" << endl;
		cout << "6. Zadanie 4.1 - Manipulacja strimieniem. Uzycie setw, setprecission, fixed ... etc" << endl;
		cout << "7. Zadanie 4.4 - Manipulacja strumieniem. Wyswietlanie tablicy produktow w opisanym formacie" << endl;
		cout << "8. Zadanie 4.13 - Rysowanie piramidy i trojkata rownoramiennego" << endl;
		cout << "9. Zadanie 4.16 - Prosta baza studentow z wykorzystaniem std::vector" << endl;
		cout << "10. Zadanie 5.6 - metody abstrakcyjne po klasie Figura" << endl;
		cout << endl;
		cout << "0. Zakoncz program."<<endl;
		cout << "Wpisz numer: ";
		cin >> wybor_zadania;

		switch(wybor_zadania) {
			case 1:
				cout << "=== Zadanie 1 ===" << endl;
				zad1.Run();
				cout << endl;
				break;
			case 2:
				cout << "=== Zadanie 2 ===" << endl;
				zad2.Run();
				cout << endl;
				break;
			case 3:
				cout << "=== Zadanie 3 ===" << endl;
				zad3.Run();
				cout << endl;
				break;
			case 4:
				cout << "=== Zadanie 4 ===" << endl;
				zad4.Run();
				cout << endl;
				break;
			case 5:
				cout << "=== Zadanie 5 ===" << endl;
				zad5.Run();
				cout << endl;
				break;
			case 6:
				cout << "=== Zadanie 6 ===" << endl;
				zad6.Run();
				cout << endl;
				break;
			case 7:
				cout << "=== Zadanie 7 ===" << endl;
				zad7.Run();
				cout << endl;
				break;
			case 8:
				cout << "=== Zadanie 8 ===" << endl;
				zad8.Run();
				cout << endl;
				break;
			case 9:
				cout << "=== Zadanie 9 ===" << endl;
				zad9.Run();
				cout << endl;
				break;
			case 10:
				cout << "=== Zadanie 10 ===" << endl;
				zad10.Run();
				cout << endl;
				break;
			case 0:
				break;
			default:
				cout << "Nieprawidłowy numer zadania" << endl;
		}

		
	} while (wybor_zadania != 0);
	return 0;
}
