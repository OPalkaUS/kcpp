#include <iostream>
#include <string>
using namespace std;


int main() {
	string imie = "Oliwier";
	string nazwisko = "Palka";
	string dluzszy_tekst = "Bardzo dluuugi tekst aby zapelnic zmianna tekstowa";
	string pelna_nazwa;

	cout << "empty(pelna_nazwa): " << pelna_nazwa.empty() << endl;
        cout << "size(dluzszy_tekst): " << dluzszy_tekst.size() << endl;
	cout << "at(14): " << dluzszy_tekst.at(15) << endl;
	cout << "erase(15, 19): " << dluzszy_tekst.erase(15, 19) << endl;
	cout << "find('tekst'): " << dluzszy_tekst.find("tekst") << endl;
	imie.swap(nazwisko);
	cout << "swap(imie, nazwisko): " << imie << " " << nazwisko << endl;
	
	string nowy_podciag = dluzszy_tekst.substr(15);
	cout << "dluzszy_tekst.substr(15): " << nowy_podciag << endl;

	pelna_nazwa = nazwisko.append(" ").append(imie);
	cout << "pelna_nazwa po zlaczeniu appendem: " << pelna_nazwa << endl;

	dluzszy_tekst.clear();
	cout << "dluzszy_tekst.clear(): " << dluzszy_tekst << endl;	

	return 0;
}
