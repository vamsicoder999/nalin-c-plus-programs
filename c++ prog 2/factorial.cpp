#include<iostream>
using namespace std;
main()
{
	int n,i,f=1;
	cout<<"enter no";
	cin>>n;
	for(i=n;i>=1;i--)
	{
	f=f*i;
    }
	cout<<"factorial of no is"<<f;
}
