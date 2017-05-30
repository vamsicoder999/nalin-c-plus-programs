#include<iostream>
using namespace std;
class mul
{
	public:
		int a,b,c;
	void multiply(); 
}m;
inline void mul::multiply()
{
	cout<<"enter two numbers";
	cin>>a>>b;
	c=a*b;
	cout<<c;
}
main()
{
	m.multiply();
}
