#pragma once
#include "Organizm.h"

class Swiat {
private:
	int tura;
	void losujPole(Organizm* organizm);
	void zapelnijSwiat();
	static bool porownajInicjatywe(Organizm* a, Organizm* b);
protected:
	Organizm** pola;

public:
	Swiat();
	~Swiat();
	void wykonajTure();
	void rysujSwiat();
	Organizm* szukajCzlowieka() const;
};
