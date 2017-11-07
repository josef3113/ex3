#pragma once
#include "myPoint.h"
class Circle
{
	myPoint pointforc;
	int rad;
public:
	myPoint getpoint();
	int getrad();
	void setpoint(myPoint );
	void setrad(int);
	double areaC();
	double scope();
	void printC();
	Circle::Circle(myPoint ,int );
	Circle(void);
	~Circle(void);
};

