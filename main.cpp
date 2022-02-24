#include "KlasyRoslin.h"
#include "KlasyZwierzat.h"
#include "Swiat.h"

int main() {
	srand(time(0));
	Swiat swiat;
	Czlowiek* gracz = (Czlowiek*)swiat.szukajCzlowieka();
	while (true) {
		gracz = (Czlowiek*)swiat.szukajCzlowieka();
		if (gracz == nullptr) {
			cout << endl << "KONIEC GRY" << endl;
			break;
		}
		swiat.rysujSwiat();
		gracz->akcja(_getch());
		swiat.wykonajTure();
		system("CLS");	
	}
}
