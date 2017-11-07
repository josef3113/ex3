#include "Circle.h"
#include <iostream>

using namespace std;

#define PI 3.1415

myPoint Circle::getpoint()
{
	return pointforc;
}
int Circle::getrad()
{
	return rad;
}
void Circle::printC()
{
	pointforc.printpoint();
		cout<<" radios is:"<<rad<<endl;
}
void Circle::setpoint(myPoint point)
{
	pointforc=point;
}

void Circle::setrad(int r)
{
	rad=r;
}
double Circle::areaC()
{
	return (PI*rad*rad);

}
double Circle::scope()
{
	return (2.0*PI*rad);
}
Circle::Circle(myPoint point,int r)
{
	pointforc=point;
	rad=r;
}
Circle::Circle(void)
{
}


Circle::~Circle(void)
{
}
