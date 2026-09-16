#include "Zad10.h"


#include <iostream>
#include <cmath>


using namespace std;

class Figura {

	public:
		virtual double Obwod() = 0;
		virtual double Pole() = 0;
};

class Trojkat : public Figura {
	private:
		double podstawa;
		double wysokosc;

	public:
		Trojkat(double a_podstawa, double a_wysokosc) {
			podstawa = a_podstawa;
			wysokosc = a_wysokosc;
		}

		double Obwod() {
			return sqrt(pow((podstawa / 2), 2) + pow(wysokosc, 2));
		}

		double Pole() {
			return (podstawa*wysokosc) / 2;
		}
};

class Kwadrat : public Figura {
	private:
		double bok;

	public:
		Kwadrat(double a_bok) {
			bok = a_bok;
		}

		double Obwod() {
			return 4 * bok;
		}

		double Pole() {
			return bok * bok;
		}
};

class Prostokat : public Figura {
	private:
		double bok_a;
		double bok_b;
	public:
		Prostokat(double a_bok_a, double a_bok_b) {
			bok_a = a_bok_a;
			bok_b = a_bok_b;
		}

		double Obwod() {
			return 2 * bok_a + 2*bok_b;
		}

		double Pole() {
			return bok_a * bok_b;
		}
};

class Kolo : public Figura {
	private:
		double promien;

	public:

		Kolo(double a_promien) {
			promien = a_promien;
		}

		double Obwod() {
			return 2 * M_PI * promien;
		}

		double Pole() {
			return M_PI * promien * promien;
		}

		double Dystans(double metr_na_osobe) {
			return sqrt(metr_na_osobe / M_PI);
		}

};


void Zad10::Run() {
	Figura *trojkat1 = new Trojkat(5, 2);
	Figura *kwadrat1 = new Kwadrat(7);
	Figura *prostokat1 = new Prostokat(10, 5);
	Kolo *kolo1 = new Kolo(8);

	cout << "Pole i obwod trojkatu: " << trojkat1->Pole() << " | " << trojkat1->Obwod() << endl;
	cout << "Pole i obwod kwadratu: " << kwadrat1->Pole() << " | " << kwadrat1->Obwod() << endl;
	cout << "Pole i obwod prostokatu: " << prostokat1->Pole() << " | " << prostokat1->Obwod() << endl;
	cout << "Pole i obwod kola: " << kolo1->Pole() << " | " << kolo1->Obwod() << endl;
	cout << "Jesli na jednego obywatela przypada 5 metrow kwadratowych to nastepny moze sie znalezc w odleglosci " << kolo1->Dystans(5) << " metrow." << endl;
}

