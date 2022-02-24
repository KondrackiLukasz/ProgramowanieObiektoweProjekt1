#pragma once
#include "Roslina.h"

class Trawa : public Roslina {
public:
	Trawa();
	void rysowanie() override;
};

class Mlecz : public Roslina {
public:
	Mlecz();
	void rysowanie() override;
};

class Guarana : public Roslina {
public:
	Guarana();
	void rysowanie() override;
	void kolizja(Organizm* napastnik) override;
};

class WilczeJagody : public Roslina {
public:
	WilczeJagody();
	void rysowanie() override;
	void kolizja(Organizm* napastnik) override;
};

class BarszczSosnowskiego : public Roslina {
public:
	BarszczSosnowskiego();
	void rysowanie() override;
	void kolizja(Organizm* napastnik) override;
	void akcja();
};


