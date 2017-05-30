w#include<iostream>
using namespace std;
main()
{
	int i=5;
	float j=19.5;
	int *ptr;
	ptr=&i;
	float *ptr1;
	ptr1=&j;
	void *ptr2;//void pointer
	ptr2=&i;
    cout<<*(int*)ptr2<<endl;
    ptr2=&j;
	cout<<*(float*)ptr2;
}
