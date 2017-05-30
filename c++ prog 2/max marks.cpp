#include<iostream>
using namespace std;
main()
{
	int a[10];
	int c=0,i;
	cout<<"enter the marks"<<endl;
	for(i=0;i<10;i++)
	cin>>a[i];
	for(i=0;i<10;i++)
	{
	if(a[i]>c)
	c=a[i];
    }
	cout<<"max marks is"<<c;
}
