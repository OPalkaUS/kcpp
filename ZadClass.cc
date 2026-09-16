#include <iostream>
#include <ctime>

using namespace std;

class Postac {

public:
	int zdrowie;
	int maxZdrowie;
	
	void zapiszDateUtworzenia() {
		time_t timestamp = time(&timestamp);
		struct tm * datetime = localtime(&timestamp);
		char output[50];
		strftime(output, 50, "%Y-%m-%d", datetime);
		dataUtworzenia.assign(output, 50);
	}

	void pokazZdrowie() {
		cout << "Zdrowie: " << zdrowie << endl;
	}

	inline void pokazPelneZdrowie() {
		cout << "Zdrowie: " << zdrowie << "/" << maxZdrowie << endl;
	}

private:
	string dataUtworzenia;

	void pokazDateUtworzenia () {
		cout << "Data utworzenia postaci: " << dataUtworzenia << endl;
	}
public: 
	void pokazPrywatneDane() {
		pokazDateUtworzenia();
	}
protected:
	int maxPrzypisaneZdrowie = 20000;
	int ustawMaxZdrowie (int noweZdrowie);

};

int Postac :: ustawMaxZdrowie(int noweZdrowie) {
	if (noweZdrowie > maxPrzypisaneZdrowie) {
		return -1;
	}
	maxZdrowie = noweZdrowie;
	return maxZdrowie;
}

class Przeciwnik : public Postac {
	protected:
		int maxPrzypisaneZdrowie = 250000;
		
		int ustawMaxZdrowie(int noweZdrowie) {
			if (noweZdrowie > maxPrzypisaneZdrowie) {
				return -1;
			}
			maxZdrowie = noweZdrowie;
			return maxZdrowie;
		} 
};


int main() {
	Postac glownaPostac;
	glownaPostac.zdrowie = 2000;
	glownaPostac.maxZdrowie = 2100;
	glownaPostac.zapiszDateUtworzenia();

	cout << "Glowna postac: " << endl;
	glownaPostac.pokazPelneZdrowie();

	cout << "Przeciwnik1: " << endl;
	Przeciwnik przeciwnik1;
	przeciwnik1.zdrowie = 5000;
	przeciwnik1.maxZdrowie = 5000;
	
	przeciwnik1.pokazPelneZdrowie();
	return 0;
}
