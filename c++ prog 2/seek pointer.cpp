#include<iostream>
#include<fstream>
using namespace std;
main()
{
	char data[45];
	cout<<"enter data";
	cin>>data;
	ofstream outfile("fpp.txt");
	outfile<<data;
	outfile.close();
	ifstream infile("fpp.txt");
	infile.seekg(5);
	cout<<infile.tellg();
	infile.close();
}
