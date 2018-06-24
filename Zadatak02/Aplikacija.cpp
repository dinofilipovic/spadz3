#include <iostream>
#include <cmath>
#include <Windows.h>
#include "Tocka.h"
#include "Aplikacija.h"
using namespace std;

void Aplikacija::osvjeziApp(Tocka& a, Tocka& b, int& razmakX, int& razmakY)
{
	cout << "Razmak X: " << razmakX << endl;
	cout << "Razmak Y: " << razmakY << endl;
	if (razmakX > 0 || razmakX < 0)
	{
		a.pomakniPoXOsi(a, b, razmakX);
	}
	else
	{
		a.pomakniPoYOsi(a, b, razmakY);
	}

}

void Aplikacija::pronadiPut(Tocka& a, Tocka& b, int& razmakX, int& razmakY)
{
	int test = razmakX;
	if (test < 0) { test *= -1; }
	// Kalukiram x:
	if (test > 0)
	{
		razmakX = a.getX() - b.getX();
		razmakY = a.getY() - b.getY();
	}
	// Kalkuliram y:

	if (razmakX <= 0)
	{
		razmakY = a.getY() - b.getY();
	}
	Sleep(1000);
	osvjeziApp(a, b, razmakX, razmakY);
}