#include<iostream>
using namespace std;
main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	cout<<"enter two matrices";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		cout<<endl;
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]+b[i][j]<<ends;
		}
	}
	
}
