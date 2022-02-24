#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <vector>
#include <algorithm>
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77 
#define SZEROKOSC 20
#define WYSOKOSC 20
#define ILOSCPOL 400

class Swiat;

class Organizm {
protected:
	Organizm** pola;
	int x;
	int sila;
	int inicjatywa;
	int wiek = 0;

public:
	virtual void kolizja(Organizm* napastnik);
	virtual void rysowanie() = 0;
	virtual void akcja() = 0;
	int getSila() const;
	int getInicjatywa() const;
	int getX() const;
	void setX(int x);
	void setPola(Organizm** pola);
	Organizm** getPola() const;
	int getWiek() const;
	void zwiekszWiek();
	void setSila(int sila);
};
