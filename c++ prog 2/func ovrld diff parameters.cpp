#include<iostream>
using namespace std;
class add
{
public:
void sum(int x, int y)
{
	int z;
	z=x+y;
	cout<<"sum is:"<<z;
}
void sum(float x,float y)
{
	float z;
	z=x+y;
	cout<<"sum is:"<<z;
}
void sum(char x,string y)
{
	cout<<"\nchars are:"<<x<<endl<<y;
}
}v;
main()
{
	int p,q;
	float r,s;
	char t;
	string u;
	cout<<"enter two nos\n";
	cin>>p>>q;
	v.sum(p,q);
	cout<<"\nenter two decimal nos\n";
	cin>>r>>s;
	v.sum(r,s);
	cout<<"\nenter two characters\n";
	cin>>t>>u;
	v.sum(t,u);
}
