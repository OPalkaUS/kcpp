#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
	
	printf("Wypisanie tekstu na ekran z uzyciem C");

	FILE *fileC = fopen("daneC.txt", "w");

	if (fileC == NULL) {
		fprintf(stderr, "ERROR: Nie mozna otworzyc pliku daneC.txt\n");
		return 1;
	}

	fprintf(fileC, "Ten plik zostal zapisany\n");
	fprintf(fileC, "za pomoca jezyka C\n");

	fclose(fileC);

	FILE *fileC_read = fopen("daneC.txt", "r");

	if (fileC_read == NULL) {
		fprintf(stderr, "ERROR: Nie mozna otworzyc pliku daneC.txt\n");
		return 2;
	}

	char line_buff[200];
	printf("Odczyt pliku daneC.txt: \n");

	while(fgets(line_buff, sizeof(line_buff), fileC_read) != NULL) {
		printf("%s", line_buff);
	}

	fclose(fileC_read);

	cout << "Operacja wypisania na ekran w C++" << endl;
	cerr << "ERROR: Testowy blad" << endl;

	ofstream fileCPP("daneCPP.txt");

	if (!fileCPP) {
		cerr << "ERROR: Nie mozna otworzyc pliku daneCPP.txt" << endl;
		return 3;
	}

	fileCPP << "Ten plik zostal zapisany..." << endl;
	fileCPP << "za pomoca jezyka C++" << endl;
	fileCPP.close();

	ifstream fileCPP_read("daneCPP.txt");

	if (!fileCPP_read) {
		cerr << "ERROR: Nie mozna otworzyć pliku daneCPP.txt" << endl;
	}

	string line_buffCPP;
	
	cout << "Zawartosc pliku daneCPP.txt: " << endl;

	while(getline(fileCPP_read, line_buffCPP)) {
		cout << line_buffCPP << endl;
	}

	fileCPP_read.close();

	return 0;
}
