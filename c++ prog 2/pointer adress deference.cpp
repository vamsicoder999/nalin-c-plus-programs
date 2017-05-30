#include<iostream>
using namespace std;
main()
{
	int a=5;
	int *p;
	int *q=&a;
	p=&a;
	cout<<a<<endl<<&a<<endl<<p<<endl<<&p<<endl<<*p<<endl;
    cout<<q<<endl<<*q;
}
