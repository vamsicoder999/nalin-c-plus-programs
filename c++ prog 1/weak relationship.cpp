//Aggregation
#include<iostream>
using namespace std;
class DOB
{
	int d,m,y;
	public:
		void getdob()
		{
			cout<<"enter DOB:";
			cin>>d>>m>>y;
		}
		void putdob()
		{
			cout<<"dob is:";
			cout<<d<<m<<y;
		}
};
class stud
{
	int roll;
	char name[20];
    DOB d;
    public:
    	void getdata()
    	{
    		cout<<"enter name nd roll";
    		cin>>name>>roll;
    		d.getdob();
		}
		void putdata()
		{
			cout<<"information is";
			cout<<name<<roll;
			d.putdob();
		}
};
main()
{
	stud s;
	s.getdata();
	s.putdata();
}
