#include<iostream>
using namespace std;
class base1
{
	public:
		int m;
		base1(int x)
		{
			m=x;
			cout<<"parenr 1:"<<m;
		}
};
class base2
{
	public:
		int a;
		base2(int y)
		{
			a=y;
			cout<<"parent 2:"<<a;
		}
};
class derive:public base1,public base2
{
	public:
		int b;
		derive(int r,int p):base1(r),base2(p)
		{
			b=r;
			cout<<"derive:"<<b;
		}
};
main()
{
	derive d(40,60);
}
