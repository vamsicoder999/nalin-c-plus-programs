

//primitive to class type
#include<iostream>
using namespace std;
class student
{
	int a,b;
	public:
		student()
		{
			cout<<"l";
		}
	    student(int k)
		{
			cout<<"n";
			a=k;
			b=k;
		}
		void display()
		{
			cout<<a<<ends<<b<<endl;
		}
};
main()
{
	
	
	
	
	student s;
	//s.display();
	int x=50;
	s=x;
	s.display();
}
