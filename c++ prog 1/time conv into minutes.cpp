#include<iostream>
using namespace std;
class stud
{
	int a,b,c;
	public:
		stud(int k,int j)
		{
			a=k;
			b=j;
		}
		operator int()
		{
			c=a*60+b;
			return c;
		}
};
main()
{
	int x,y,z;
	cout<<"enter hrs:";
	cin>>x;
	cout<<"enter mins:";
	cin>>y;
	stud s(x,y);
	z=s;
	cout<<"minutes="<<z;
}
