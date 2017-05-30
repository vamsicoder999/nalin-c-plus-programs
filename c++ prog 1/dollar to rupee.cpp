#include<iostream>
using namespace std;
class dollar
{
	public:
		int b,c;
		dollar(int k)
		{
		c=k;
		}
		operator int()
		{
			b=c*60;
			return b;	
		}
};
class rupee
{
	public:
		int a;
		rupee(int l)
		{
			a=l;
		}
		operator int()
		{
	 	 return a;
		}
};
main()
{
	int d,e,v;
	cout<<"enter dollar";
	cin>>d;
	dollar o(d);
	rupee r(o);
	v=r;
	cout<<"rupee="<<v;
}
