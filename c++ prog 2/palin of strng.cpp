#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int i,l,k,j;
	char a[20],s[20];
	cout<<"enter length of string\n";
	cin>>l;
	cout<<"enter string\n";
	cin>>a;
	for(i=l-1,k=0;i>=0;i--,k++)
	s[k]=a[i];
	cout<<"reverse of string is\n"<<s<<endl;
	//for(i=0;i<l;i++)
	//{
	//	if(a[i]==s[i])
	//	j=1;
	//}
	//if(j==1)
	j=strcmp(a,s);
	if(j==0)
	cout<<"palindrome\n";
	else
	cout<<"not";
}
