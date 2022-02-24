#pragma once
#include "Zwierze.h"

class Czlowiek : public Zwierze {
public:
	Czlowiek();
	void rysowanie() override;
	void akcja(int komenda);
	void akcja();
};

class Wilk : public Zwierze {
public:
	Wilk();
	void rysowanie() override;
};

class Owca : public Zwierze {
public:
	Owca();
	void rysowanie() override;
};

class Lis : public Zwierze {
public:
	Lis();
	void rysowanie() override;
};

class Zolw : public Zwierze {
public:
	Zolw();
	void rysowanie() override;
};

class Antylopa : public Zwierze {
public:
	Antylopa();
	void rysowanie() override;
};

