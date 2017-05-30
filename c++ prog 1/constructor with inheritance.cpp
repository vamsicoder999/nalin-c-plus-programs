#include<iostream>
using namespace std;
class base
{
	public:
		base()
		{
			cout<<"constructor of base class";
		}
};
class derive:public base
{
	public:
		derive()
		{
			cout<<"constructor of derive class";
		}
};
main()
{
	derive d;
}
