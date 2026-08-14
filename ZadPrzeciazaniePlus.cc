#include <iostream>

using namespace std;

class Punkt {
	private:
		double x;
		double y;
	public:

		Punkt(double x1, double y1) {
			x = x1;
			y = y1;
		}

		void wypisz() {
			cout << "Punkt(" << x << ", "<< y << ")" << endl;
		}

		Punkt operator+ (Punkt p2) {
			return Punkt(this->x + p2.x, this->y + p2.y);
		}
};


int main() {
	Punkt p1 = Punkt(8, 20);
	Punkt p2 = Punkt(1, 11);

	Punkt p3 = p1 + p2;
	p3.wypisz();
	return 0;
}
