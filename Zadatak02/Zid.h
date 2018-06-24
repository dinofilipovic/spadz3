#pragma once

class Zid {
private:
	int x;
	int y;

public:
	// Konstruktor:
	Zid(int x, int y);

	// Destruktor:
	~Zid();
	// Setteri:
	void setCoordinateX(int x);
	void setCoordinateY(int y);
	// Getteri:
	int getX();
	int getY();
};