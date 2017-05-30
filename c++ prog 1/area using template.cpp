#include<iostream>
using namespace std;
template<class t>
t area(t r)
{
	return(3.14*r*r);
}
template<class t>
t area(t l,t b)
{
	return (l*b);
}
main()
{
	cout<<"area of circle="<<area(2)<<endl;
	cout<<"area of rectangle="<<area(5,6);
}
