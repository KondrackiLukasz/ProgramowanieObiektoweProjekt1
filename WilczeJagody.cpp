#include "KlasyRoslin.h"

WilczeJagody::WilczeJagody() {
	sila = 99;
}

void WilczeJagody::rysowanie() {
	cout << " j ";
}

void WilczeJagody::kolizja(Organizm* napastnik) {
	Organizm* tmpPtr = pola[x];
	pola[napastnik->getX()] = nullptr;
	delete napastnik;
	pola[x] = nullptr;
	delete tmpPtr;
}