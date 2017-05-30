#include<iostream>
using namespace std;
class abc
{
	int x,y;
	public:
		void set(int a,int b)
		{
			x=a;
			y=b;
			cout<<x<<endl<<y<<endl;
		}
};
main()
{
	abc o;
	cout<<"adress of:"<<&o<<endl;
	void(abc::*fp)(int,int)=& abc::set;
	(o.*fp)(10,20);
}
