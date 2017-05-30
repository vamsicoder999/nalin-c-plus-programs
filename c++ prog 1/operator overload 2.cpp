#include<iostream>
using namespace std;
class space
{
	private:
		int x,y,z;
	public:
	 space(int a,int b,int c)	
	 {
	 	x=a;
	 	y=b;
	 	z=c;
	 }
	 void display()
	 {
	 	cout<<x;
	 	cout<<y;
	 	cout<<z;
	 }
	friend void operator-(space &s);

};
void operator-(space &s)
    {
    	cout<<endl;
    	s.x=-s.x;
    	s.y=-s.y;
    	s.z=-s.z;
	}
main()
{
	space s(10,20,30);
	s.display();
    -s;
	s.display();
}
