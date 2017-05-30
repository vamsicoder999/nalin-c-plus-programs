//Composition
#include<iostream>
using namespace std;

class stud
{
	int roll;
	char name[20];
    public:
    	void getdata()
    	{
    		cout<<"enter name nd roll";
    		cin>>name>>roll;
		}
		void putdata()
		{
			cout<<"information is";
			cout<<name<<roll;
		}
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
}d;
};
main()
{
	stud s;
	s.getdata();
	s.d.getdob();
	s.putdata();
	s.d.putdob();
}
