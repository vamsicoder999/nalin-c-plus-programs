#include<iostream>
using namespace std;
class space
{
	private:
		int x,y,z;
	public:
		space()
		{
		}
	 space(int a,int b,int c)	
	 {
	 	x=a;
	 	y=b;
	 	z=c;
	 }
	 void display()
	 {
	    cout<<endl;
	 	cout<<x<<ends<<y<<ends<<z;
	 }
	 friend void operator-(space &s);
	 /*{
	 	cout<<endl;
	 	x=-x;
	 	y=-y;
	 	z=-z;
	 }*/
	 void operator++()
	 {
	 	cout<<endl;
	 	++x;
	 	++y;
	 	++z;
	 }
	/*void operator++(int)
	 {
	 	x++;
	 	y++;
	 	z++;
	 }*/
	space operator++(int)
	{
		space i;
	  	i.x=x++;
		i.y=y++;
		i.z=z++;
		return i;
	}

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
//	space s,s1;
	int p,q,r;
	cin>>p>>q>>r;
	space s(p,q,r),s1;
//	s.get(p,q,r);
	s.display();
	-s;
	s.display();
	++s;
	s.display();
	s++;
	s1=s++;
	s.display();
	s1.display();
	s.display();
	//s1.display();
}
