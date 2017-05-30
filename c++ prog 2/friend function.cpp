#include<iostream>
using namespace std;
class add
{
	private:
		int a,b;
	public:
		void enter()
		{
			cout<<"enter two nos\n";
			cin>>a>>b;
		}
		void display()
		{
			cout<<"entered nos are:"<<a<<ends<<b<<endl;
		}
		friend void fun(add c);
}c;
void fun(add c)
{
	cout<<"sum of entered nos is:"<<c.a+c.b<<endl;
}
main()
{
	c.enter();
	c.display();
	fun(c);
}
