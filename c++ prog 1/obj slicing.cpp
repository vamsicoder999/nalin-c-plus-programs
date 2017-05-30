#include<iostream>
using namespace std;
class student
{
	public:
		int cse,phy;
		void display()
		{
			cin>>cse>>phy;
			cout<<cse<<phy;
		}
};
class student1:public student
{
	public:
		int eng,maths;
		void show()
		{
			cin>>eng>>maths;
			cout<<eng<<maths;
		}
};
main()
{
	student s;
	student1 s1;
	s1.display();
	s1.show();
	s=s1;
}
