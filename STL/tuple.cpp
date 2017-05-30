#include<iostream>
#include<tuple>
using namespace std;
main()
{
	tuple<string,int,char>a;
	a=make_tuple("rahul",92,'A');
	cout<<"name:"<<get<0>(a)<<"\nmarks:"<<get<1>(a)<<"\ngrade:"<<get<2>(a);
}
