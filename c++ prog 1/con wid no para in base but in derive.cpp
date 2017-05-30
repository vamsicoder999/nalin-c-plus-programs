#include<iostream>
using namespace std;
class base
{
	public:
		base()
		{
			cout<<"constructor of base class";
		}
		~base()
		{
			cout<<"\ndes base\n";
		}
};
class derive:public base
{
	public:
		int a,b;
		derive(int x,int y):base()
		{
			a=x;
			b=y;
			cout<<endl<<a<<endl<<b;
		}
		~derive()
		{
			cout<<"\ndes derived";
		}
};
main()
{
	derive d(10,20);
		{
		derive a(0,0);
	}
}
