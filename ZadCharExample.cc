#include <iostream>
#include <cstring>
using namespace std;


int main() {
	
	char name[] = "Oliwier";
	cout << "name: " << name << endl;
	cout << "strlen(name): " << strlen(name) << endl;

	char zeroString[40];
	memset(zeroString, '0', 16);
	zeroString[16] = '\0';
	cout << "zeroString: " << zeroString << endl;
	cout << "strcoll(name, zeroString): " << strcoll(name, zeroString) << endl;
        cout << "strerror(14): " << strerror(14) << endl;
	cout << "strtok(name, \"w\"): " << strtok(name, "w")  << endl;

	char dlugiTekst[] = "Bardzo dlugi tekst aby wypelnic zmienna";
	cout << "strstr(dlugiTekst, \"tek\"): " << strstr(dlugiTekst, "tek") << endl;
	cout << "strspn(dlugiTekst, \"abcdefghijklABCEFGH\"): " << strspn(dlugiTekst, "abcdefghijklABCDEFGH") << endl;	
	return 0;
}
