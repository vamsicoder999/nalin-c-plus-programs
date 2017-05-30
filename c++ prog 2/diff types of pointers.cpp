#include<iostream>
using namespace std;
main()
{
	int i=5;
	float j=20.5;
	void *ptr;
	ptr=&i;
	ptr=&j;
	cout<<*(int*)ptr<<endl;
	cout<<*(float*)ptr;
}
