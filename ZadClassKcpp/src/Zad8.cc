#include "Zad8.h"

#include <iostream>
using namespace std;

void Zad8::Run() {
  int rozmiar;
  cout << "Podaj rozmiar kwadratu: ";
  cin >> rozmiar;

  cout << "\nKwadrat:" << endl;
  for (int i = 0; i < rozmiar; i++) {
    for (int j = 0; j < rozmiar; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  cout << "\nTrojkat prostokatny:" << endl;
  for (int i = 0; i < rozmiar; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  cout << "\nPiramida:" << endl;
  for (int line=1; line <= rozmiar; line++) {
	for (int i=(rozmiar-line); i>0; i--) {
		cout << " ";
	}
	for (int i=(rozmiar-line); i<rozmiar; i++) {
		cout << line << " ";
	}
	cout << endl;
  }
}

