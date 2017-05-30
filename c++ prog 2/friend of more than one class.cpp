#include<iostream>
using namespace std;
class add1;
class add
{
	int x;
	friend void sum(add a,add1 a1);
	public:
		void input()
		{
			cin>>x;
		}
}a;
class add1
{
	int p;
	friend void sum(add a,add1 a1);
	public:
		void input()
		{
			cin>>p;
		}
}a1;
void sum(add a,add1 a1)
{
	cout<<endl<<a.x+a1.p;
}
main()
{
	a.input();
	a1.input();
	sum(a,a1);
}
