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
			b=k;
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
	s=x;
	s.display();
}
