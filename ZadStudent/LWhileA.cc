#include <iostream>
using namespace std;

int main() {
  int liczba, suma, ile_liczb = 0;

  cout << "Wprowadzaj liczby (0 konczy program):" << endl;
  cin >> liczba;

  while (liczba != 0) {
    if (liczba < 0) {
	cout << "Wprowadzona liczba nie jest dodatnia." << endl;
	cin >> liczba;
    	continue;
    }
    suma += liczba;
    ile_liczb++;
    cin >> liczba;
  }

  cout << "Suma wprowadzonych liczb: " << suma << endl;

  return 0;
}
