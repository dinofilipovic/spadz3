#include <iostream>
#include <Windows.h>
#include <cmath> 
using namespace std;

// Kreiram strukturu za tocku
struct Tocka
{
	int x = 0;
	int y = 0;
};

// Funkcija za unos tocaka:
void unosTocka(Tocka& a) {
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
void kreirajPolje(Tocka& a, Tocka& b)
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


void pomakniDesno(Tocka& a)
{
	a.x += 1;
	cout << "a.x: " << a.x << endl;
}

void pokaniLijevo(Tocka& a)
{
	a.x -= 1;
	cout << "a.x: " << a.x << endl;
}

void pomakniDolje(Tocka& a)
{
	a.y += 1;
	cout << "a.y: " << a.y << endl;
}

void pomakniGore(Tocka& a)
{
	a.y -= 1;
	cout << "a.y: " << a.y << endl;
}

void pomakniPoXOsi(Tocka& a, Tocka& b, int razmakX)
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

void pomakniPoYOsi(Tocka& a, Tocka& b, int razmakY)
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

void osvjeziApp(Tocka& a, Tocka& b, int& razmakX, int& razmakY)
{
	cout << "Razmak X: " << razmakX << endl;
	cout << "Razmak Y: " << razmakY << endl;
	if (razmakX > 0 || razmakX < 0)
	{
		pomakniPoXOsi(a, b, razmakX);
	}
	else
	{
		pomakniPoYOsi(a, b, razmakY);
	}

}

void pronadiPut(Tocka& a, Tocka& b, int& razmakX, int& razmakY)
{
	int test = razmakX;
	if (test < 0) { test *= -1; }
	// Kalukiram x:
	if (test > 0)
	{
		razmakX = a.x - b.x;
		razmakY = a.y - b.y;
	}
	// Kalkuliram y:

	if (razmakX <= 0)
	{
		razmakY = a.y - b.y;
	}

	//cout << "Razmak koordinata x: " << razmakX << endl;
	//cout << "Razmak koordinata y: " << razmakY << endl;
	//cout << "Koordinata Tocke A: " << "(" << a.x << "," << a.y << ")" << endl;
	//cout << "Koordinata Tocke B: " << "(" << b.x << "," << b.y << ")" << endl;
	Sleep(1000);
	osvjeziApp(a, b, razmakX, razmakY);
}

int main() {

	Tocka a;
	Tocka b;
	int razmakX = 1;
	int razmakY = 1;
	unosTocka(a);
	unosTocka(b);
	
	// Kreiram inicijalne koordinate:
	kreirajPolje(a, b);

	// Pokrecem aplikaciju:
	do {
		pronadiPut(a, b, razmakX, razmakY);
	} while (abs(razmakX) > 0 || abs(razmakY) > 0);

	return 0;
}