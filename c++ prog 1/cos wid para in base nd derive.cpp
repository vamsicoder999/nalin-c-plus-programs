#include<iostream>
using namespace std;
class base
{
	public:
		int m;
		base(int i)
		{
			m=i;
			cout<<m;
		}
};
class derive:public base
{
	public:
		int a;
		derive(int x,int y):base(x+y)
		{
			a=x;
			cout<<a;
		}
};
main()
{
	derive d(10,20);
}
