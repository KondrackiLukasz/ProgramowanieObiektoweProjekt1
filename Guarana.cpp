#include "KlasyRoslin.h"
#include "Zwierze.h"

Guarana::Guarana() {
	sila = 0;
}

void Guarana::rysowanie() {
	cout << " g ";
}

void Guarana::kolizja(Organizm* napastnik) {
	if (sila > napastnik->getSila()) {
		pola[napastnik->getX()] = nullptr;
		delete napastnik;
	}
	else {
		Organizm* tmpPtr = pola[x];
		int tmpX = napastnik->getX();
		napastnik->setX(x);
		pola[x] = napastnik;
		pola[tmpX] = nullptr;
		napastnik->setSila(napastnik->getSila() + 3);
		delete tmpPtr;
	}
}
