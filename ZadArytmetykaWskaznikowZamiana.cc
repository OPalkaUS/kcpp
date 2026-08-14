#include <iostream>

using namespace std;

void zamien(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int liczba1 = 14;
	int liczba2 = 25;
	cout << liczba1 << " " << liczba2 << endl;
	zamien(&liczba1, &liczba2);
	cout << liczba1 << " " << liczba2 << endl;

	return 0;
}
