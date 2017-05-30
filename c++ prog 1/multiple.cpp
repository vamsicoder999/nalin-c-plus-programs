#include<iostream>
using namespace std;
class a
{
	public:
		void show()
		{
			cout<<"hello";
		}
};
class b
{
	public:
		void show()
		{
			cout<<"world";
		}
};
class c:public a,public b
{
	public:
		void s()
		{
			cout<<"h";
		}
};
main()
{
   c o;
   o.a::show();	
}
