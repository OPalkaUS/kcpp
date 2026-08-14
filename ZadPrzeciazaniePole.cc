#include <iostream>

using namespace std;

float pole(float bokA) {
	return bokA * bokA;
}

float pole(float bokA, float bokB) {
	return bokA * bokB;
}

float pole(float r, bool czyKolo) {
	if (!czyKolo) return pole(r);

	return 3.1415926535 * r * r;
}

int main() {
	float a = 10.5;
	float b = 7.2;

	cout << "a = "<<a<<"; b = "<<b<<endl;
	cout << "Pole kwadratu o boku a = " << pole(a) << endl;
	cout << "Pole prostokatu o bokach a i b = " << pole(a,b) << endl;
	cout << "Pole kola z promieniem a = " << pole(a, true) << endl;


	return 0;
	
}
