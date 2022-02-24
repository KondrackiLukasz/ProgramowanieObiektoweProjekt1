#include "KlasyZwierzat.h"

Czlowiek::Czlowiek() {
	sila = 5;
	inicjatywa = 4;
}

void Czlowiek::rysowanie() {
	cout << " C ";
}


void Czlowiek::akcja(int komenda) {
	switch (komenda) {
	case KEY_UP:
		if (x > 19) {
			if (pola[x - 20] == nullptr) {
				pola[x - 20] = pola[x];
				pola[x] = nullptr;
				x -= 20;
			}
			else {
				pola[x - 20]->kolizja(pola[x]);
			}
		}
		break;
	case KEY_DOWN:
		if (x < 380) {
			if (pola[x + 20] == nullptr) {
				pola[x + 20] = pola[x];
				pola[x] = nullptr;
				x += 20;
			}
			else {
				pola[x + 20]->kolizja(pola[x]);
			}
		}
		break;
	case KEY_LEFT:
		if (x % 20 != 0) {
			if (pola[x - 1] == nullptr) {
				pola[x - 1] = pola[x];
				pola[x] = nullptr;
				x -= 1;
			}
			else {
				pola[x - 1]->kolizja(pola[x]);
			}
		}
		break;
	case KEY_RIGHT:
		if (x % 20 != 19) {
			if (pola[x + 1] == nullptr) {
				pola[x + 1] = pola[x];
				pola[x] = nullptr;
				x += 1;
			}
			else {
				pola[x + 1]->kolizja(pola[x]);
			}
		}
		break;
	}
}

void Czlowiek::akcja() {}