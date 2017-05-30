#include<iostream>
using namespace std;
main()
{
	int n,p,i,c=0;
	cout<<"enter no of nos:";
	cin>>n;
	int a[n];
	cout<<"\nenter nos:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter no to search:";
	cin>>p;
		for(i=0;i<n;i++)
		{
       if(a[i]==p)
  	   c++;
        }
        if(c!=0)
        {
        cout<<"found"<<"\nno of times="<<c;
        }
        else
        cout<<"not found";
}
