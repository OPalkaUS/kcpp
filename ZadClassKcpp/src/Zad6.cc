#include "Zad6.h"

#include <iostream>
#include <iomanip>

using namespace std;

void Zad6::Run() {

	//Jakies obliczenia
	double output1 = 100.0 / 30.0;
	double output2 = 210.0 / 30.0;
	double output3 = 1000.0 / 64.0;

	double T1 = 100.0 / 8.0;
	double T2 = 256.0 / 19.0;
	double T3 = 33.3 / 10.0;

	double avgOutput = (output1 + output2 + output3) / 3.0;
	double avgT = (T1 + T2 + T3) / 3.0;

	//Wypisywanie na ekran

	cout << setfill(' ') << "Wynik naszego dzialania: " << fixed << setprecision(5) << 100.0 / 30.0 << " jest niepoprawny ale:" << endl;

	cout << setw(8) << left << "output:"
		<<setw(10) << right << setprecision(3) << output1
		<< setw(6) << left << " T:"
		<<setw(10) << right<<setprecision(3)<<T1<<endl;

	cout << setw(8) << left << "output1:"
                <<setw(10) << right << setprecision(4) << output2
                <<setw(6) << left << " T:"
                <<setw(10) << right<<setprecision(5)<<T2<<endl;
	
	cout << setw(8) << left << "output2:"
                <<setw(10) << right << setprecision(4) << output3
                << setw(6) << left << " T:"
                <<setw(10) << right<<setprecision(6)<<T3<<endl;	

	cout << setfill('-') << setw(34) << "" << endl;


	cout << setfill(' ') << setw(8) << left << "average:"
                <<setw(10) << right << setprecision(4) << avgOutput
                << setw(6) << left << " T:"
                <<setw(10) << right<<setprecision(6)<<avgT << endl;

	cout << endl;
	cout << "--- Przyklady innych manipulatorow ---" << endl;


	cout << setw(16) << left << "scientific:" 
		<< setw(8) << right << scientific << setprecision(2) << avgOutput << endl;

	cout << setw(16) << left << "hex:"
		<< setw(8) << right << hex << 16221 << endl;

	cout << setw(16) << left << "boolalpha:"
		<< setw(8) << right << boolalpha << (0 > 10) << endl;
}
