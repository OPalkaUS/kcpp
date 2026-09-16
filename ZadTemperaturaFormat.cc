#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	cout << right << setw(8) << "Celsjusz" << setw(13) << "Fahrenheit" << endl;
	cout << setfill('-');
	cout << right << setw(8) << "" << setw(13) << "" << endl;
	cout << setfill(' ');

	for (int start_value = -10; start_value <= 10; start_value += 5) {
		double fah = start_value * 9.0 / 5.0 + 32.0;
		
		cout << right << setw(8) << start_value
			<< setw(13) << fixed << setprecision(2) << fah << endl;
	
	}

	return 0;
}
