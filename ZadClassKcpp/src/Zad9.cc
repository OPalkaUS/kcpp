#include "Zad9.h"

#include <algorithm> // do sortowania i wyszukiwania
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct student{
	int nr_indeksu;
	string imie;
	string nazwisko;
};

void Zad9::Run() {
  vector<student> listaStudentow;
  int wybor;

  cout << "=== Program do zarzadzania lista studentow ===" << endl;

  do {
    cout << "\nMenu:" << endl;
    cout << "1. Dodaj studenta" << endl;
    cout << "2. Usun studenta" << endl;
    cout << "3. Wyswietl liste" << endl;
    cout << "4. Sortuj liste (alfabetycznie)" << endl;
    cout << "5. Sprawdz, czy student istnieje" << endl;
    cout << "0. Wyjdz" << endl;
    cout << "Wybierz opcje: ";
    cin >> wybor;
    cin.ignore(); // aby uniknąć problemów z getline()

    switch (wybor) {
    case 1: { // Dodawanie studenta
      student nowyStudent;
      cout << "Podaj imie studenta: ";
      getline(cin, nowyStudent.imie);
      if (nowyStudent.imie.empty()) {
	cout << "ERROR: Imie nie moze byc puste!" << endl;
      	break;
      }
      cout << "Podaj nazwisko studenta: ";
      getline(cin, nowyStudent.nazwisko);
      if (nowyStudent.nazwisko.empty()) {
      	 cout << "ERROR: Nazwisko nie moze byc puste!" << endl;
	 break;
      }
      cout << "Podaj index studenta: ";
      cin >> nowyStudent.nr_indeksu;
      auto it = find_if(listaStudentow.begin(), listaStudentow.end(), [nowyStudent](const student& s) {
      	return s.nr_indeksu == nowyStudent.nr_indeksu;
      });
      if (it != listaStudentow.end()) {
	cout << "Student o podanym indeksie juz istnieje w bazie!" << endl;
      	break;
      }
      listaStudentow.push_back(nowyStudent);
      cout << "Dodano studenta!" << endl;
      break;
    }
    case 2: { // Usuwanie studenta
      if (listaStudentow.empty()) {
        cout << "Lista jest pusta!" << endl;
        break;
      }
      int index;
      cout << "Podaj indeks studenta do usuniecia: ";
      cin >> index;
      auto it = find_if(listaStudentow.begin(), listaStudentow.end(), [index](const student& s) {
        return s.nr_indeksu == index;
      });
      if (it != listaStudentow.end()) {
        listaStudentow.erase(it);
        cout << "Usunieto studenta!" << endl;
      } else {
        cout << "Nie znaleziono studenta!" << endl;
      }
      break;
    }
    case 3: { // Wyświetlanie listy
      if (listaStudentow.empty()) {
        cout << "Lista jest pusta!" << endl;
      } else {
        cout << "\nLista studentow:" << endl;
        for (const auto &student_item : listaStudentow) {
          cout << "- " << "(" << student_item.nr_indeksu << ") "
		  << student_item.imie
		  << " " << student_item.nazwisko << endl;
        }
      }
      break;
    }
    case 4: { // Sortowanie listy
      sort(listaStudentow.begin(), listaStudentow.end(), [](const student& student_a, const student& student_b) {
      	return student_a.nazwisko < student_b.nazwisko; // Rosnaco czyli alfabetycznie
      });
      cout << "Posortowano liste!" << endl;
      break;
    }
    case 5: { // Sprawdzanie obecności studenta
      int index;
      cout << "Podaj index studenta do sprawdzenia: ";
      cin >> index;
      bool istnieje = find_if(listaStudentow.begin(), listaStudentow.end(), [index](const student& s) {
	return s.nr_indeksu == index;
      }) != listaStudentow.end();
      cout << (istnieje ? "Student jest na liscie!"
                        : "Nie ma takiego studenta!")
           << endl;
      break;
    }
    case 0: {
      cout << "Koniec programu." << endl;
      break;
    }
    default: {
      cout << "Nieprawidlowa opcja!" << endl;
    }
    }
  } while (wybor != 0);
}

