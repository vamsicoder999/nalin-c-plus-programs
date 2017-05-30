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
class ca2:virtual public ca1
{
	public:
		int maths,total;
		void read2()
		{
			cin>>maths;
		}
		void sum()
		{
		    total=maths+eng+phy;
		}
};
class ca3:public virtual ca1
{
	public:
		int chem,ece;
		void read3()
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
	o.read();
	o.read2();
	o.sum();
	o.read3();
	o.display();
}
