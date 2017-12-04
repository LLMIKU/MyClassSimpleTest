#pragma once
#include"MyPoint.h"
class MyCircle
{
public:
	void setCir(double x, double y, double r);
	char* judge(MyPoint &p);
private:
	double x0, y0, r0;
};

