#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	
	cout<<"ends gives"<<ends<<ends<<"space"<<ends<<"by inserting null character";//ends
	int a=526,b=15;
	float c=12351.25;
	cout<<endl<<setw(7)<<a;//setw
	cout<<endl<<setfill('@')<<setw(7)<<a<<endl;//setfill
	cout<<setbase(16)<<b<<ends<<10<<ends<<16<<endl<<oct<<17<<endl;//setbase
	cout<<setprecision(5)<<12456.8<<ends<<1245.56<<ends<<ends<<1234568.1245;//precision
	char d[20];
	cout<<"\nenter string\n";
	cin>>ws>>d; //eliminate leading whitespace1
	cout<<"\nstring is\n"<<d;
}
