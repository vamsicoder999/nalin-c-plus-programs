#include<iostream>
using namespace std;
class student
{
	public:
		int a,l;
		student ()
		{
		 a=5;
		 cout<<a<<endl;
	    }
	    student(int k)
	    {
	    	cout<<k;
		}
	    student (student &s)
		{
		 l=s.a;
		 cout<<l;
	    }
		void sum()
		{
			cout<<a;
		}
};
main()
{
	student s;
	
}
