#include<iostream>
using namespace std;
main()
{
	int i=5;
	int *ptr,**ptr1;
	ptr=&i;
	ptr1=&ptr;
	cout<<"add of i="<<&i<<endl<<"value of ptr="<<ptr<<endl<<"address of ptr="<<&ptr<<endl<<"value of *ptr="<<*ptr<<endl<<"val of ptr1="<<ptr1<<endl<<"add of ptr1="<<&ptr1<<endl<<"val of **ptr1="<<**ptr1;
	//"add of i="<<&i<<endl
	//<<"value of ptr="<<ptr<<endl
	//<<"address of ptr="<<&ptr<<endl
	//<<"value of *ptr="<<*ptr<<endl
	//<<"val of ptr1="<<ptr1<<endl
	//<<"add of ptr1="<<&ptr1<<endl
	//<<"val of **ptr1="<<**ptr1
}
