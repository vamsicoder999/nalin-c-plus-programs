#include<iostream> 
#include<iomanip>
using namespace std;
main()
{
    int x;
	//cout<<"enter a no"<<endl;
	cin>>x;
	//int s=x*x;
	//cout<<"square of the no is"<<s;
	//cout<<setprecision(5)<<x<<endl;
	cout<<setfill('*');
	cout<<setw(5)<<x;
}
