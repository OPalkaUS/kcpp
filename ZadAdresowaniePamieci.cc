#include <iostream>
#include <cstdint>

using namespace std;
/*
 *	Zmienna lokalne sa allokowane na stosie malejaco tzn kazda nastepna zmienna ma przypisywany
 *	adres o jeden nizej.
 *	
 *	W niektorych systemach operacyjnych pamiec moze byc allkowoana od dolu do gory tzn rosnaco.
 *
 *	Kompilatory moga posiadac optymalizacje ktora wyrownuje pamiec i inaczej allokuje pamiec
 *	w sposob zmienny. Mozna ja wylaczyc dodajac flage -O0.
 */


int main() {

	int zmienna1 = 15;
	int zmienna2 = 33;
	int zmienna3 = 88;
	int zmienna4 = -1;

	cout << "Wypisywanie adresow poszczegolnych zmiennych" << endl;
	cout << &zmienna1 << endl;
	cout << &zmienna2 << endl;
	cout << &zmienna3 << endl;
	cout << &zmienna4 << endl;

	cout << "Roznice miedzy adresami zmiennych (rozmiar int)" << endl;
	cout << &zmienna2 - &zmienna1<< " " << &zmienna3 - &zmienna2 << " " << &zmienna4 - &zmienna3 << endl;
	uintptr_t addr_zmienna1 = reinterpret_cast<uintptr_t>(&zmienna1);
	uintptr_t addr_zmienna2 = reinterpret_cast<uintptr_t>(&zmienna2);
	cout << "Roznica miedzy adresami 2 pierwszych zmiennych (w bajtach)" << endl;
	cout << (addr_zmienna1 - addr_zmienna2) << endl;
	return 0;
}
