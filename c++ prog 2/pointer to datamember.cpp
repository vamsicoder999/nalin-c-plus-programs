#include<iostream>
using namespace std;
class sum
{
public:
	int a;
	void dis();
	
}s;
main()
{
int sum::*p;
p=&sum::a;
cout<<"enter value of a";
cin>>s.*p;
sum *ptr;
ptr=&s;
cin>>ptr->*p;
cin>>ptr->a;
cin>>s.a;
}
