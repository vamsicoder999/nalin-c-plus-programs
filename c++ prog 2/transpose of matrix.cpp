#include<iostream>
using namespace std;
main()
{
	int n,m;
	cout<<"enter order of matrix:";
	cin>>n>>m;
	int a[n][m],b[m][n],i,j;
	cout<<"enter matrix\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		cout<<endl;
		for(j=0;j<n;j++)
		{
			cout<<b[i][j]<<ends;
		}
	}
}
