#include <iostream>
#include "Circle.h"

using namespace std;


void main ()
{
	myPoint point(3,1),point2(1,1);
	Circle newcircle(point,3);
	newcircle.printC();
	cout<<newcircle.areaC()<<endl;
	cout<<newcircle.scope()<<endl;
	newcircle.setpoint(point2);
	newcircle.setrad(5);

	newcircle.printC();
	cout<<newcircle.areaC()<<endl;
	cout<<newcircle.scope()<<endl;

	system ("pause");

}

