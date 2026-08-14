#include <iostream>
#include <string>
using namespace std;

class Czas {
	public:
		Czas(int rMinuta = 0, int rGodzina = 0) {
			SetMinuta(rMinuta);
			SetGodzina(rGodzina);
		};
		~Czas() {
			cout << "Obiekt Czas zostal usuniety" << endl;
		};

		void SetMinuta (int rMinuta) {
			if (rMinuta > 59 or rMinuta < 0) return;
			minuta = rMinuta;
		}

		void SetGodzina (int rGodzina) {
			if (rGodzina > 23 or rGodzina < 0) return;
			godzina = rGodzina;
		}

		int GetGodzina () {
			return godzina;	
		}

		int GetMinuta () {
			return minuta;
		}

		void print() {
			cout << "Czas: " << godzina <<":"<<minuta << endl;
		}

	private:
		int minuta;
		int godzina;

};

int main(){
	Czas moj_czas = Czas(37, 21);
	Czas moj_czas2 = Czas();
	moj_czas.print();
	moj_czas2.print();
	return 0;
}
