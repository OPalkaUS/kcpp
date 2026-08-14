#include <iostream>

using namespace std;


void przesun(int* tab, int size) {
	int nextIdx;
	int temp = tab[0];
	int temp2 = tab[0];

	for (int i = 0; i<size; i++) {
		nextIdx = (i+1)%size;
		temp2 = tab[nextIdx];
		tab[nextIdx] = temp;
		temp = temp2;
	}
}

int main() {
	int tablica[] = {1,2,3,4,5,6,7,8,9,10,11};
	przesun(tablica, 11);

	for (int i = 0; i<11; i++) {
		cout << tablica[i] << " ";
	}
	cout << endl;

	return 0;
}
