#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int i,l;
	char a[20],s[20];
	cout<<"enter length of string\n";
	cin>>l;
	cin>>a;
	for(i=l-1,l=0;i>=0;i--,l++)
	s[l]=a[i];
	cout<<s;
	if(strcmp(a,s)==0)
	cout<<"palindrome\n";
	else
	cout<<"not";
}
