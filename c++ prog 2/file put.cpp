#include<iostream>
#include<fstream>
using namespace std;
main()
{
	char name[15];
	char sec[5];
	int roll;
	cout<<"enter name"<<endl;
	cin>>name;
	cout<<"enter section"<<endl;
	cin>>sec;
	cout<<"enter roll"<<endl;
	cin>>roll;
	ofstream a("put.txt");
	a<<name<<endl;
	a<<sec<<endl;
	a<<roll<<endl;
	a.close();
	
	ifstream infile("put.txt");
	infile>>name;	
	infile>>sec;
	infile>>roll;
	cout<<name<<endl;
	cout<<sec<<endl;
	cout<<roll;
	infile.close();
 }
	

