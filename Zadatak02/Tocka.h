#pragma once
#include <iostream>
#include <cmath>
using namespace std;

// Kreiram strukturu za tocku
class Tocka
{
private:
	int x = 0;
	int y = 0;

public:
	// Funkcija za unos tocaka:
	void unosTocka(Tocka& a);
	// Funkcija za kreiranje polja:
	void kreirajPolje(Tocka& a, Tocka& b);
	void pomakniDesno(Tocka& a);
	void pokaniLijevo(Tocka& a);
	void pomakniDolje(Tocka& a);
	void pomakniGore(Tocka& a);

	// Getteri:
	int getX();
	int getY();

	// Setteri:
	void pomakniPoXOsi(Tocka& a, Tocka& b, int razmakX);
	void pomakniPoYOsi(Tocka& a, Tocka& b, int razmakY);
};

