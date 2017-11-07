#ifndef SQUARE_H  //# pragma once
#define  SQUARE_H
class square
{
private :int _x,_y,_length;
public:
	square(int ,int,int);
	square();
	int getx();
	int gety();
	int getlen();
	void setx(int a);
	void sety(int b);
	void setlen(int l);

	bool check(int x,int y);
	void printsquare();
	int area();
	
};

int operator ==(square & ,square&);

#endif


