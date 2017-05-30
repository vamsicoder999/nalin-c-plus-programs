#include<iostream>
using namespace std;
class complex
{
	int x,y;
	public:
	complex()
	{
		x=2;
		y=6;
	}
   friend complex operator+(complex,complex);
   void display()
  {
  	cout<<endl<<x<<endl<<y;
  }
	
};
complex operator+(complex s1,complex s2)
{
	complex c;
	c.x=s1.x+s2.x;
	c.y=s1.y+s2.y;
}
main()
{
	complex s1,s2,s3;
	cout<<"before";
	s1.display();
	s2.display();
	s3=operator+(s1,s2);
	cout<<endl<<"after";
	s3.display();
}
