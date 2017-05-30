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
		void read()
		{
			cin>>maths;
		}
		void sum()
		{
		    total=maths+eng+phy;
		    cout<<total;
		}
};
main()
{
	ca2 o;
	o.ca1::read();
	o.ca2::read();
	o.sum();
}
