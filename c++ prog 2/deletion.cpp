#include<iostream>
using namespace std;
main()
{
	int n,i,p;
	cout<<"enter size of array:";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter position of no to be deleted:";
	cin>>p;
	for(i=p-1;i<n;i++)
	a[i]=a[i+1];
	for(i=0;i<n-1;i++)
	cout<<a[i]<<endl;
}
