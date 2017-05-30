#include<iostream>
using namespace std;
main()
{
	int *ptr,n;
	cout<<"enter no of elements";
	cin>>n;
	ptr=new int[n];
	for(int i=0;i<n;i++)
	cin>>ptr[i];
	for(int i=0;i<n;i++)
	cout<<ptr[i];
}
