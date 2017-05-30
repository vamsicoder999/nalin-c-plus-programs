#include<iostream>
#include<array>
using namespace std;
main()
{
	array <int,5> a={1,2,3,4,5};
	cout<<"elements of a are:";
	for(int i=0;i<5;i++)
	cout<<a[i]<<" ";
	cout<<endl<<a.at(3);                //at();
	cout<<" "<<a.front()<<" ";         //front();
	cout<<a.back();                   //back();
	cout<<endl<<a.size()<<"\n";      //size();
	array<int,5>b;
	b.fill(9);                       //fill();
	cout<<"elements of b are:";
	for(int i=0;i<5;i++)
	cout<<b[i]<<" ";
	a.swap(b);                      //swap();
	cout<<"\nelements of a are:";
	for(int i=0;i<5;i++)
	cout<<a[i]<<" ";
	cout<<"\nelements of b are:";
	for(int i=0;i<5;i++)
	cout<<b[i]<<" ";
}
