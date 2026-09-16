#include <iostream>
using namespace std;

int main() {
  int liczba;
  long long silnia = 1; // long long, aby uniknąć przepełnienia
  long long sum_silnia = 0;

  cout << "Podaj liczbe do obliczenia silni: ";
  cin >> liczba;

  if (liczba <= 0) {
	  cout << "Silna jest zdefiniowana tylko dla liczb nieujemnych!" << endl;
  	return 0;
  }

  for (int i = 1; i <= liczba; i++) {
    silnia *= i;
    sum_silnia += silnia;
  }

  cout << "Silnia z " << liczba << " wynosi: " << silnia << endl;
  cout << "Suma silni wynosi: " << sum_silnia << endl;;
 
  return 0;
}
