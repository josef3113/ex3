#include <iostream>
#include "square.h"

using namespace std;

int square::getlen()
{
	return _length;
}

int square::getx()
{
	return _x;
}

int square::gety()
{
	return _y;
}

square::square(int x,int y,int len)
{
	_x=x;
	_y=y;
	_length=len;
}

square::square()
{
}

void square::setlen(int len)
{
	_length=len;
}

void square::setx(int x)
{
	_x=x;
}

void square::sety(int y)
{
	_y=y;
}
bool square:: check(int x,int y)
{
	if(x-_x<_length&&y-_y<_length)
		return true;
	else 
		return false;

}

void square:: printsquare()
{
	cout<<"x:"<<_x<<" y:"<<_y<<" len:"<<_length<<endl;

}

int square::area()
{
	
	return _length*_length;
}


int operator == (square &a,square &b)
{
	if ((a.getlen()==b.getlen()) && (a.getx()==b.getx()) && (a.gety()==b.gety()) )
		return 1;

	return 0;
}
