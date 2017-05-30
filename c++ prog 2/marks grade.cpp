#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"enter marks\n";
	cin>>a;
	if(a>=90)
	cout<<"A grade\n";
    else if (a>=85 && a<90)
	cout<<"B grade\n";
	else  if(a>=80 && a<85)
	cout<<"C grade\n";
   else	if(a>=75 && a<80)
	cout<<"D grade";
}
