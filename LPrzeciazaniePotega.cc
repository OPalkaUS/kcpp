#include <iostream>

using namespace std;


int potega(int podstawa, int wykladnik) {
	if (wykladnik == 0) return 1;
	int a = podstawa;
	for (int i=1; i<wykladnik; i++) {
		a *= podstawa;
	}
	return a;
}

double potega(double podstawa, int wykladnik) {
	if (wykladnik == 0) return 1.0;
	double a = podstawa;
	for (int i = 1; i<wykladnik; i++) {
		a *= podstawa;
	}
	return a;
}

int main() {

	cout << "2 do potegi 10 = "<< potega(2, 10) << endl;
	cout << "3.14 do potegi 10 = " << potega(3.14, 10) << endl;
	return 0;
}
