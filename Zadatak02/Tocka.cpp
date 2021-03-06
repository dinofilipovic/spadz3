#include <iostream>
#include <Windows.h>
#include <cmath>
#include "Tocka.h"
using namespace std;

// Funkcija za unos tocaka:
void Tocka::unosTocka(Tocka& a) {
	cout << "Please enter coordinate for x:\n";
	cin >> a.x;
	if (a.x < 0 || a.x > 40)
	{
		cout << "You have entered wrong value for x, please enter it again! ";
		cin >> a.x;
	}
	cout << "Please enter coordinate for y:\n";
	cin >> a.y;
	if (a.y < 0 || a.y > 20)
	{
		cout << "You have entered wrong value for y, please enter it again! ";
		cin >> a.y;
	}
}


// Funkcija za kreiranje polja:
void Tocka::kreirajPolje(Tocka& a, Tocka& b)
{
	for (int i = 0; i <= 20; i++)
	{
		for (int j = 0; j <= 40; j++)
		{
			if (i == a.y && j == a.x) {
				cout << 'A';
			}
			else if (i == b.y && j == b.x)
			{
				cout << 'B';
			}
			else
			{
				cout << "-";
			}
		}
		cout << "-" << endl;
	}
}


void Tocka::pomakniDesno(Tocka& a)
{
	a.x += 1;
	cout << "a.x: " << a.x << endl;
}

void Tocka::pokaniLijevo(Tocka& a)
{
	a.x -= 1;
	cout << "a.x: " << a.x << endl;
}

void Tocka::pomakniDolje(Tocka& a)
{
	a.y += 1;
	cout << "a.y: " << a.y << endl;
}

void Tocka::pomakniGore(Tocka& a)
{
	a.y -= 1;
	cout << "a.y: " << a.y << endl;
}

void Tocka::pomakniPoXOsi(Tocka& a, Tocka& b, int razmakX)
{
	if (razmakX < 0)
	{
		razmakX *= -1;
		pomakniDesno(a);
		system("CLS");
		kreirajPolje(a, b);
		cout << "Kreni desno za " << razmakX * -1 << endl;
	}
	else if (razmakX > 0)
	{
		pokaniLijevo(a);
		system("CLS");
		kreirajPolje(a, b);
		cout << "Kreni lijevo za " << razmakX << endl;
	}
}

void Tocka::pomakniPoYOsi(Tocka& a, Tocka& b, int razmakY)
{
	if (razmakY < 0)
	{
		razmakY *= -1;
		pomakniDolje(a);
		system("CLS");
		kreirajPolje(a, b);
		cout << "Kreni dolje za " << razmakY * -1 << endl;
	}
	else if (razmakY > 0)
	{
		pomakniGore(a);
		system("CLS");
		kreirajPolje(a, b);
		cout << "Kreni gore za " << razmakY << endl;
	}
}

int Tocka::getX()
{
	return this->x;
}

int Tocka::getY()
{
	return this->y;
}