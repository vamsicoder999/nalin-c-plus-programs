#include<iostream>
using namespace std;
//int sqr(int);
int sqr(int x)
{
	int z;
	z=x*x;
	return z;
}
main()
{
	int n;
	int l;
	char b;
	cout<<"enter no:";
	cin>>n;
	try
	{
		if(n>10)
		throw l;
		if(n<0)
		throw b;
		cout<<sqr(n);
	}
	catch(int a)
	{
		cout<<"no cant be greater than 10";
	}
	catch(char c)
	{
		cout<<"no cant be smaller than 0";
	}

}
