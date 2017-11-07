#include "myPoint.h"
#include <iostream>
using namespace std;

myPoint::myPoint(void)
{
}

myPoint::myPoint(int x,int y)
{
	_x=x;
	_y=y;
}

void myPoint::printpoint()
{
	cout<<"x is:"<<_x<<" y is:"<<_y;
}

int myPoint::getx()
{
	return _x;
}

int myPoint::gety()
{
	return _y;
}
void myPoint::setx(int x)
{
	_x=x;
}
void myPoint::sety(int y)
{
	_y=y;
}
myPoint::~myPoint(void)
{
}
