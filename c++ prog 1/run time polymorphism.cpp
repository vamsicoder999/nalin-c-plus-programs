#include<iostream>
using namespace std;
class base
{
	public:
	virtual	void getdata()      //virtual function
		{
			cout<<"Base class";
		}
};
class derive:public base
{
	public:
		void getdata()
		{
			cout<<"derive cass";
		}
};
main()
{
	base *ptr;
	derive d;
	ptr=&d;
	ptr->getdata();
}
