#include<iostream>
using namespace std;
int fab(int);
main()
{
	int n,i,l=0;
	cout<<"enter no:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	cout<<fab(l)<<ends;
	l++;
    }
}
int fab(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return (fab(n-1)+fab(n-2));
}
