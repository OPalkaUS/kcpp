#include <iostream>
#include <cstdlib>  // dla rand()
#include <ctime>    // dla time()
using namespace std;

int main() {
    srand(time(0));
    int proba = 0, licznik = 0, poziom = 0;
    int poziom_max[] = {50, 200};

    cout << "Wybierz poziom trudnosci: 1 - latwy, 2 - trudny" << endl;
    cin >> poziom;
    if (poziom < 1 or poziom > 2) {
	cout << "Wprowadzono nieprawidlowy poziom trudnosci!" << endl;
    	return 0;
    }
    int wylosowana = rand() % poziom_max[poziom-1] + 1;
    cout << "Zgadnij liczbe (1-"<< poziom_max[poziom-1] << "):" << endl;

    while (licznik <= 10) {
        cin >> proba;
        licznik++;

        if (proba < wylosowana) {
            cout << "Za malo! Probuj dalej." << endl;
        } else if (proba > wylosowana) {
            cout << "Za duzo! Probuj dalej." << endl;
        } else {
            cout << "Brawo! Zgadles w " << licznik << " probach." << endl;
            return 0;
        }
    }

    cout << "Za duzo prob! Prawidlowa liczba bylo " << wylosowana << endl;

    return 0;
}
