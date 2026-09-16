#include <iostream>

using namespace std;

void OperatoryArytmetyczne() {
	int a = 14;
	int b = 23;
	cout << "a = " << a << " b = " << b << endl;

	cout << "a+b = " << a+b << endl;
	cout << "a-b = " << a-b << endl;
	cout << "a*b = " << a*b << endl;
	cout << "a/b = " << a/b << endl;
	cout << "a%b =" << a%b << endl;
	cout << "++a = " << ++a << endl;
	cout << "--a = " << --a << endl;

}

void OperatoryPrzypisania() {
	  int a;

	  a = 10;
          cout << "a = 10 \t wynik:" << a << endl;

          a += 2;
          cout << "a += 2 \t wynik:" << a << endl;

          a -= 6;
          cout << "a -= 6 \t wynik:" << a << endl;

          a *= 7;
          cout << "a *= 7 \t wynik:" << a << endl;

          a /= 2;
          cout << "a /= 2 \t wynik:" << a << endl;

          a %= 5;
          cout << "a %= 5 \t wynik:" << a << endl;

}


int main() {
	OperatoryArytmetyczne();
	OperatoryPrzypisania();
	return 0;
}
