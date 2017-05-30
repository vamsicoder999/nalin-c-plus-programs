#include<iostream>
using namespace std;
main()
{
	int n,i,j,p,m;
	cout<<"enter size of array";
	cin>>n;
	int a[n];
	cout<<"enter array";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter no to be insert and its position:";
	cin>>m>>p;
	p--;
	for(i=n;i>p;i--)
	{
		a[i]=a[i-1];
}
	a[p]=m;
	cout<<"new array is:"<<endl;
	for(i=0;i<=n;i++)
	cout<<a[i]<<endl;
}
