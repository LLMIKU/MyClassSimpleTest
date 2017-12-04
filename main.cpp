#include"iostream"
using namespace std;
#include"MyPoint.h"
#include"MyCircle.h"

void main()
{
	MyCircle c1;
	MyPoint p1;
	c1.setCir(0, 0, 2);
	p1.setPoint(1, 1);
	cout<<c1.judge(p1)<<endl;
	system("pause");
}