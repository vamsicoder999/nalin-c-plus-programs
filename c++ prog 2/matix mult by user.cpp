#include<iostream>
using namespace std;
main()
{
	int n,m,s,i,j,k;
    cout<<"enter order of 1st matrix:";
    cin>>n>>m;
    int a[n][m];
    cout<<"\nenter 1st matrix\n";
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		cin>>a[i][j];
		}
	}
	cout<<"enter order of 2nd matrix:";
	cin>>m>>s;
	int b[m][s];
	cout<<"enter 2nd matrix\n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<s;j++)
		{
			cin>>b[i][j];
		}
	}
	int c[n][s];
	for(i=0;i<n;i++)
	{
		for(j=0;j<s;j++)
		{
			c[i][j]=0;
			for(k=0;k<m;k++)
			{
				c[i][j]=a[i][k]*b[k][j]+c[i][j];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<endl;
	    for(j=0;j<s;j++)
		{
		   cout<<c[i][j]<<ends;	
		}	
	}
}
