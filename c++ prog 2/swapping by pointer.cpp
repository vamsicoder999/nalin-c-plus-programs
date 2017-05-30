#include<iostream>
using namespace std;
main()
{
	int a=4,b=6;
	int *p=&a,*q=&b,m;
	cout<<"value of a and b="<<*p<<"and"<<*q;
	m=*q;
	*q=*p;
	*p=m;
	cout<<"new value of a and b="<<*p<<endl<<*q;
}
