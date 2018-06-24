#include "Zid.h"
#include <iostream>
using namespace std;

Zid::Zid(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Zid::setCoordinateX(int x)
{
	this->x = x;
}

void Zid::setCoordinateY(int y)
{
	this->y = y;
}

int Zid::getX()
{
	return this->x;
}

int Zid::getY()
{
	return this->y;
}