#include <iostream>
#include <string>

using namespace std;

int dodaj(int a, int b) {
	return a + b;
}

float dodaj(float a, float b) {
	return a + b;
}

string dodaj(string a, string b) {
	return a + b; //Lub mozna uzyc metody .append()
}

int main() {
	cout << "Dwa inty: "<< dodaj(6, 7) << endl;
	cout << "Dwa floaty: "<< dodaj(6.7f, 7.6f) << endl;
	cout << "Dwa napisy: "<< dodaj("Napis + ", "drugi dluzszy napis") << endl;	
	return 0;
}
