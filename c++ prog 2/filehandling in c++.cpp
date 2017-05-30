#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream outfile("what.txt");
	outfile<<"file"<<endl;
	outfile<<"handling";
	outfile.close();
}
