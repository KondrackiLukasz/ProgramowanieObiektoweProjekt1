#include "Roslina.h"


Roslina::Roslina() {
	inicjatywa = 0;
}

void Roslina::akcja() {
	int random = rand() % 100;
	if (random == 99) {
		Organizm* tmpPtr = pola[x];
		pola[x] = nullptr;
		delete tmpPtr;
	}
}