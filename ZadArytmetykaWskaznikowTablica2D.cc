#include <iostream>

using namespace std;

int main() {

	int tab[3][3];

	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++) {
			cout << "Adres pamieci dla ["<<i<<"]["<<j<<"]: " << &tab[i][j] << endl;
		}
	}

	cout << "Jak mozna zauwazyc pamiec jest ulozona w nastepujacy sposob: " << endl;
	cout << "[0][0] [0][1] [0][2] [1][0] [1][1] [...]" << endl;
	return 0;
}
