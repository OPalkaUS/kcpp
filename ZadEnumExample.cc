#include <iostream>
#include <string>
using namespace std;


enum e_miesiace {
	Styczen = 1,
	Luty,
	Marzec,
	Kwiecien,
	Maj,
	Czerwiec,
	Lipiec,
	Sierpien,
	Wrzesien,
	Pazdziernik,
	Listopad,
	Grudzien
};

int main() {

	e_miesiace my_month = Maj;
	cout << "Miesiac, w ktorym sie urodzilem jest "<< my_month << " miesiacem" << endl;
	return 0;
}
