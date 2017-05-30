//class to primitive type
#include<iostream>
using namespace std;
class data
{
	int a,b;
	public:
		void get(int x)
		{
			a=x;
			b=2;
		}
	    void display()
		{
			cout<<"a="<<a<<ends<<"b="<<b<<endl;
		}
		operator int()
		{
			return a;
		}
};
main()
{
	data d;
	d.get(1);
	int z;
	z=d;
	d.display();
	cout<<"z="<<z;
	
}
