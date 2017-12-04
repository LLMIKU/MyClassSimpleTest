#include "MyCircle.h"

void MyCircle::setCir(double x, double y, double r)
{
	x0 = x;
	y0 = y;
	r0 = r;
}

char* MyCircle::judge(MyPoint &p)
{
	double s = (x0 - p.getX())*(x0 - p.getX()) + (y0 - p.getY())*(y0 - p.getY()) - r0*r0;
	if (s > 0)
		return "��Բ��";
	else if (s == 0)
		return "��Բ��";
	else return "��Բ��";
}