#include<iostream>
using namespace std;
class base1
{
	public:
		int m;
		base1(int p)
		{
			m=p;
			cout<<m<<"\ncons of base 1";
		}
};
class base2
{
	public:
		int a;
		base2(int q)
		{
			a=q;
			cout<<a<<"\ncons of base 2";
		}
};
class derive:public base1,public base2
{
	public:
		derive(int x,int y):base2(x),base1(y)
		{
			cout<<"cons of derive";
		}
};
main()
{
	derive d(2,3);
}
