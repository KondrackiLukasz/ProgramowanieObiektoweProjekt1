#include "Organizm.h"

int Organizm::getSila() const {
	return sila;
}

int Organizm::getInicjatywa() const {
	return inicjatywa;
}

int Organizm::getX() const {
	return x;
}


void Organizm::setX(int x) {
	this->x = x;
}

void Organizm::setPola(Organizm** pola) {
	this->pola = pola;
}

Organizm** Organizm::getPola() const {
	return pola;
}

int Organizm::getWiek() const {
	return wiek;
}

void Organizm::zwiekszWiek() {
	wiek++;
}


void Organizm::kolizja(Organizm* napastnik) {
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
		delete tmpPtr;
	}
}

void Organizm::setSila(int sila) {
	this->sila = sila;
}