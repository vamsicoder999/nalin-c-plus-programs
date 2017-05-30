#include<iostream>
using namespace std;
class complex
{
	public:
  int x,y;
  public:
  complex(int a,int b)
  {
  	x=a;
  	y=b;
  }
 friend complex operator+(complex &s1);
 /* {
  	complex temp(0,0);
  	temp.x=x+o.x;
  	temp.y=y+o.y;
  	return temp;
  }*/
  void display()
  {
  	cout<<endl<<x<<endl<<y;
  }
};
complex operator+(complex &s1,complex &s2)
{
	complex temp(0,0);
  	temp.x=s1.x+s2.x;
  	temp.y=s1.y+s2.y;
  	return temp;
}
main()
{
	complex s1(1,2),s2(3,4),s3(0,0);
	cout<<"before";
	s1.display();
	s2.display();
	s3=s1+s2;
	cout<<endl<<"after";
	s3.display();
}
