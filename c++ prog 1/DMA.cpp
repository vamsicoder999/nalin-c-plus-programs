#include<iostream>
using namespace std;
main()
{
	int *p;
	//=new int (10);
	p=new int;
	*p=10;
	cout<<"adress="<<&p;
	cout<<endl<<"value="<<p;
	cout<<endl<<"dereferenced="<<*p;
	delete p;
	*p=NULL;
	cout<<endl<<"adress="<<&p;
	cout<<endl<<"value="<<p;
	cout<<endl<<"dereferenced="<<*p;
}

