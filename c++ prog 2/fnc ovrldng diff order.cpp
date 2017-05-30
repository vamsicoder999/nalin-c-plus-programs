#include<iostream>
using namespace std;
void sum(int x)
{
	cout<<"no is"<<x;
}
void sum(int x,float y)
{
	float z;
	z=x+y;
	cout<<"sum is:"<<z;
}
void sum(int x,float y,char z)
{
	float k;
	k=x+y;
	cout<<"sum is:"<<k;
	cout<<"\nchar is:"<<z;
}
}v;
main()
{
	int p;
	float q;
	char r;
	cout<<"enter a no\n";
	cin>>p;
	v.sum(p);
	cout<<"\nenter two nos\n";
	cin>>p>>q;
	v.sum(p,q);
	cout<<"\nenter two nos\n";
	cin>>p>>q;
	cout<<"enter character\n";
	cin>>r;
	v.sum(p,q,r);
}
