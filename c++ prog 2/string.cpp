#include<iostream>
#include<string>
using namespace std;
main()
{
	int l;
	string k="bnmagghhghhhgh";
	string a("Go");
	string b(a);
	string c=" Ahead";
	string d,f;
	string e;
	d=c; //string assingment
	cout<<a<<endl<<b<<endl<<c<<endl<<k<<sizeof(k)<<endl;
	cout<<"string after cancatenation:"<<a+c<<endl;
	e=a+c;
	cout<<"string in e:"<<e<<endl;
	if(a==b)
	{
		cout<<"both are equal";
	}
	if(a!=c)
	{
		cout<<"\nboth are not equal";
	}
	if(a>c)
	{
		cout<<"\na>c";
	}
	if(c<a)
	{
		cout<<"\nc<a";
	}
    
}
