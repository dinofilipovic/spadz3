#include <iostream>
#include <Windows.h>
#include <cmath> 
#include "Tocka.h"
#include "Aplikacija.h"

using namespace std;

int main() {

	Tocka a;
	Tocka b;
	Aplikacija app;
	int razmakX = 1;
	int razmakY = 1;
	a.unosTocka(a);
	b.unosTocka(b);

	// Kreiram inicijalne koordinate:
	a.kreirajPolje(a, b);

	// Pokrecem aplikaciju:
	do {
		app.pronadiPut(a, b, razmakX, razmakY);
	} while (abs(razmakX) > 0 || abs(razmakY) > 0);

	return 0;
}