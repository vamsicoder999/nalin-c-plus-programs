#include<iostream>
using namespace std;
void sum(int &,int &);
main()
{
	int a,b;
	cout<<"enter two nos";
	cin>>ws>>a>>b;
	sum(a,b);
}
void sum(int &x,int &y)
{
	int z;
	z=x+y;
	cout<<"sum is"<<z;
}
