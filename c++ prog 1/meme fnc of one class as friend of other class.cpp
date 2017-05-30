#include<iostream>
using namespace std;
class input;
class sum
{
	public:
	void add(input i);
}s;
class input
{
	int a,b;
	friend void sum::add(input i);
	public:
		void in()
		{
			cin>>a>>b;
		}
}i;
void sum::add(input i)
{
	cout<<i.a+i.b;
}
main()
{
	i.in();
	s.add(i);
}
