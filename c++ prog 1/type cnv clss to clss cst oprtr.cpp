//class to class type using cast operator
#include<iostream>
using namespace std;
class put
{
		
		public:
			int a;
			put()
			{
				
			}
	void putdata(int v)
		{
			a=v;
			cout<<"a="<<a;
		}
		operator int()
		{
			return a;
		}
			
		
};
class get
{
		
	public:
		int c;
		get()
		{
		}
		get(put p1)
		{
			c=p1.a;
		}
		void display()
		{
			cout<<endl<<"c="<<c;
		}
};
main()
{
	put p1;
	get g1;
	p1.putdata(10);
	g1=p1;
	g1.display();
	return 0;

}
