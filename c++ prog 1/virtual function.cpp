//run time polymorphism
#include<iostream>
using namespace std;
class base       // ---------> Abstract class
{
	public:
	//	virtual void getdata()=0;   //pure virtual function
	virtual	void getdata()      //virtual function
		{
			cout<<"Base class";
		}
		void display()
		{
			cout<<endl<<"display";
		}
		void show()
		{
			cout<<"from base";
		}
};
class derive:public base
{
	public:
		void getdata()
		{
			cout<<"derive class";
		}
		void show(int x)
		{
			cout<<x<<"from derive";
		}
};
main()
{
	base *ptr;
	derive d;
	ptr=&d;
	ptr->getdata();
	ptr->display();
	ptr->show();
}
