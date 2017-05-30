#include<iostream>
#include<fstream>
using namespace std;
main()
{
	int roll_no;
	char name[100];
	char course[20];
	float marks;
	cout<<"enter   roll_no,  name,  course,  marks";
	fstream f("inform.txt",ios::in|ios::out|ios::app);
	cin>>roll_no>>name>>course>>marks;
	f<<roll_no<<name<<course<<marks;
	f>>roll_no>>name>>course>>marks;
	cout<<roll_no<<endl<<name<<endl<<course<<endl<<marks;
	f.close();
	ofstream k("inform.txt",ios::trunc);
	k.close();
}
