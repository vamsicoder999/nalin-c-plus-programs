#include<iostream>
using namespace std;
main()
{
	int n,f=0,m,l,s,i,c;
	cout<<"enter size of array:";
	cin>>n;
	int a[n];
	cout<<"\nenter sorted array\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter the no to be found:\n";
	cin>>s;
	l=n;
	for(i=0;i<n;i++)
	{
		m=(f+l)/2;
		if(a[m]>s)
		l=m;
	    if(a[m]<s)
		f=m;
		if(a[m]==s)
		c=1;
	}
	if(c==1)
	cout<<"num found";
	else
	cout<<"num not found";
}
