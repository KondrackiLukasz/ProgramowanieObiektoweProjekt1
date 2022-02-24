#include "KlasyRoslin.h"
#include "KlasyZwierzat.h"
#include "Swiat.h"

Swiat::Swiat() {
	tura = 0;
	pola = new Organizm * [ILOSCPOL];
	for (int i = 0; i < ILOSCPOL; i++) {
		pola[i] = nullptr;
	}
	zapelnijSwiat();
}

void Swiat::zapelnijSwiat() {
	for (int i = 0; i < 1; i++)
		losujPole(new Czlowiek);

	for (int i = 0; i < 5; i++)
		losujPole(new Wilk);

	for (int i = 0; i < 10; i++) {
		losujPole(new Owca);
	}

	for (int i = 0; i < 8; i++)
		losujPole(new Lis);

	for (int i = 0; i < 6; i++)
		losujPole(new Zolw);

	for (int i = 0; i < 4; i++)
		losujPole(new Antylopa);

	for (int i = 0; i < 20; i++)
		losujPole(new Trawa);

	for (int i = 0; i < 10; i++)
		losujPole(new Mlecz);

	for (int i = 0; i < 6; i++)
		losujPole(new Guarana);

	for (int i = 0; i < 3; i++)
		losujPole(new WilczeJagody);

	for (int i = 0; i < 2; i++)
		losujPole(new BarszczSosnowskiego);
}

void Swiat::losujPole(Organizm* organizm) {
	int x = rand() % 400;

	if (pola[x] == nullptr) {
		pola[x] = organizm;
		organizm->setX(x);
		organizm->setPola(pola);
	}
	else {
		delete organizm;
	}
}

void Swiat::rysujSwiat() {
	cout << "Lukasz Kondracki 180514" << endl;
	cout << "Uzyj strzalek aby sie poruszyc, lub kliknij inny przycisk by zakonczyc ture." << endl;
	cout << "TURA:  " << tura << endl;
	for (int i = 0; i < ILOSCPOL; i++) {
		if (pola[i] == nullptr) {
			cout << " # ";
		}
		else {
			pola[i]->rysowanie();
		}
		if (i % 20 == 19) {
			cout << endl;
		}
	}
}

Organizm* Swiat::szukajCzlowieka() const {
	for (int i = 0; i < ILOSCPOL; i++) {
		if (dynamic_cast<Czlowiek*>(pola[i]))
			return pola[i];
	}
	return nullptr;
}

bool Swiat::porownajInicjatywe(Organizm* a, Organizm* b) {
	if (a->getInicjatywa() > b->getInicjatywa()) return true;
	if (a->getInicjatywa() < b->getInicjatywa()) return false;
	if (a->getWiek() > b->getWiek()) return true;
	if (a->getWiek() < b->getWiek()) return false;
	return false;
}

void Swiat::wykonajTure() {
	vector<Organizm*> organizmy;
	for (int i = 0; i < ILOSCPOL; i++) {
		if (pola[i] != nullptr) {
			organizmy.push_back(pola[i]);
		}
	}
	std::sort(organizmy.begin(), organizmy.end(), &Swiat::porownajInicjatywe);
	for (int i = 0; i < organizmy.size(); i++) {
		if (organizmy[i] != nullptr) {
			organizmy[i]->akcja();
		}
	}
	tura+=1;
}

Swiat::~Swiat() {
	for (int i = 0; i < ILOSCPOL; i++) {
		delete pola[i];
	}
	delete[] pola;
}