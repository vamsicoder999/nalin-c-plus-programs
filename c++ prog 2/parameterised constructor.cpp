#include<iostream>
using namespace std;
class area
{
	int l,b,r;
	public:
		area(int x,int y)
		{
			l=x;
			b=y;
		}
		void display()
		{
			r=l*b;
			cout<<"area="<<r;
		}
};
int main()
{
	area s(5,6);
	s.display();
}
