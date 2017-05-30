#include<iostream>
using namespace std;
main()
{
	int a[10],i,j;
	cout<<"enter 10 nos:";
	for(i=0;i<10;i++)
	cin>>a[i];
	int s=a[0];
	int k=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]<s)
		s=a[i];
		if(a[i]>k)
		k=a[i];
	}
	cout<<"smallest no is:"<<s;
    cout<<"\ngreatest no is:"<<k;
}
