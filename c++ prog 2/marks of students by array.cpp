#include<iostream>
using namespace std;
main()
{
	int a[10],i,s;
	cout<<"enter marks of ten students";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
		s=s+a[i];
	}
	cout<<"sum is:"<<s;
}
