#pragma once
class myPoint
{
	int _x,_y;
public:
	myPoint(void);
	myPoint(int,int);
	int getx();
	int gety();
	void setx(int);
	void sety(int);
	void printpoint();

	~myPoint(void);
};

