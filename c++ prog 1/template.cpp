#include<iostream>
using namespace std;
template<class t>
t add(t a)
{
	return a;
}
template<class t>
t add(t p,t q)
{
	return (p+q);
}
main()
{
	cout<<add(8);
	cout<<add(7,8);
}
