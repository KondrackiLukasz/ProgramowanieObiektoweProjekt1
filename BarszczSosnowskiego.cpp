#include "KlasyRoslin.h"

BarszczSosnowskiego::BarszczSosnowskiego() {
	sila = 10;
}

void BarszczSosnowskiego::rysowanie() {
	cout << " b ";
}

void BarszczSosnowskiego::kolizja(Organizm* napastnik) {
	Organizm* tmpPtr = pola[x];
	pola[napastnik->getX()] = nullptr;
	delete napastnik;
	pola[x] = nullptr;
	delete tmpPtr;
}

void BarszczSosnowskiego::akcja() {
	if (x > 19 && pola[x - 20] != nullptr) {
		delete pola[x - 20];
		pola[x - 20] = nullptr;
	}
	if (x < 380 && pola[x + 20] != nullptr) {
		delete pola[x + 20];
		pola[x + 20] = nullptr;
	}
	if (x % 20 != 0 && pola[x - 1] != nullptr) {
		delete pola[x - 1];
		pola[x - 1] = nullptr;
	}
	if (x % 20 != 19 && pola[x + 1] != nullptr) {
		delete pola[x + 1];
		pola[x + 1] = nullptr;
	}
}