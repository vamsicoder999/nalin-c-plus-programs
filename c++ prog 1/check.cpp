//primitive to class type
#include<iostream>
using namespace std;
class student
{
	int a,b;
	public:
	    student(int k)
		{
			a=k;
		}
		student(float p)
		{
			b=p;
		}
		void display()
		{
			cout<<a<<ends<<b<<endl;
		}
};
main()
{
	student s(0);
	//s.display();
	int x=50;
	float y=2.2;
	s=x;
	s=y;
	s.display();
}
