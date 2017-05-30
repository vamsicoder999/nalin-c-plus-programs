#include<iostream>
using namespace std;
class student
{
	public:
	char name[20];
	int roll;
	int reg;
	char course[20];
	void get()
	{
		cout<<"enter name\n";
		cin>>name;
		cout<<"enter roll\n";
		cin>>roll;
		cout<<"enter reg\n";
		cin>>reg;
		cout<<"enter course\n";
		cin>>course;
	}
	void display()
	{
		cout<<"data of student:\n";
        cout<<name<<endl<<roll<<endl<<reg<<endl<<course<<endl;
	}
}s1,s2;
main()
{
	student *p,*q;
	p=&s1;
	q=&s2;
	p->*get();
 p->display();
 (*q).get();
 (*q).display();	
}	
