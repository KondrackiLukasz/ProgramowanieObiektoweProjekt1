#include "Zwierze.h"

void Zwierze::akcja() {
	int random = rand() % 4;
	switch (random) {
	case 0:
		if (x > 19) {
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
	case 1:
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
	case 2:
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
	case 3:
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
}