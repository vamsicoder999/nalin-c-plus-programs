//class to class type using constructor
#include<iostream>
using namespace std;
class put
{
		public:
		int a,b;
			void set(int x,int y)
			{
				a=x;
				b=y;
			}
};
class get
{
	private:
		int c,d;
	public:
		get()
		{
		}
		get(put &o)
		{
			c=o.a;
			d=o.b;
		}
		void display()
		{
			cout<<"c="<<c<<ends<<"d="<<d;
		}
};
main()
{
	put o;
	get s;
	o.set(5,6);
	s=o;
	s.display();
}
