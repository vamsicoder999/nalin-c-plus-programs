#include<iostream>
using namespace std;
int fact(int);
main()
{
	int n;
	cout<<"enter no:";
	cin>>n;
	cout<<endl<<"factorial of no is="<<fact(n);
}
int fact(int n)
{
	if(n>1)
	return n*fact(n-1);
	else
	return n;
}
