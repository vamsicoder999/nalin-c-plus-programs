#include<iostream>
using namespace std;
class add
{
public:
void sum()
{
	int a,b,c;
	cout<<"enter two nos\n";
	cin>>a>>b;
	c=a+b;
	cout<<"sum is:"<<c;
}
void sum(int x,int y)
{
	int z;
	z=x+y;
	cout<<"sum is:"<<z;
}
void sum(int x,int y,int z)
{
	int k;
	k=x+y+z;
	cout<<"sum is:"<<k;
}
}v;
main()
{
	int p,q,r;
	v.sum();
	cout<<"\nenter two nos\n";
	cin>>p>>q;
	v.sum(p,q);
	cout<<"\nenter three nos\n";
	cin>>p>>q>>r;
	v.sum(p,q,r);
}
