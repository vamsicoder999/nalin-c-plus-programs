#include<iostream>
using namespace std;
class ca1
{
	public:
		int eng,phy;
		void read()
		{
			cin>>eng>>phy;
		}
};
class ca2:public ca1
{
	public:
		int maths,total;
		void getdata()
		{
			cin>>maths;
		}
		void sum()
		{
		    total=maths+eng+phy;
		}
};
class ca3:public ca1
{
	public:
		int chem,ece;
		void input()
		{
			cin>>chem>>ece;
		}
};
class result:public ca2,public ca3
{
	public:
		int gt;
		void display()
		{
			gt=total+chem+ece;
			cout<<"gt="<<gt;
		}
};
main()
{
	result o;
	o.display();
}
