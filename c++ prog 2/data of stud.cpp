#include<iostream>
using namespace std;
class stud
{
	public:
		char name[20];
		int rollno;
		int marks;
		char course[10];
		char school[10];
		long int contact;
		char email[30];
		void get(void);
		void display(void);
}s1,s2;
void stud ::get(void)
{
	cout<<"enter data\n";
	cout<<"name:";
	cin>>name;
	cout<<"\nrollno:";
	cin>>rollno;
	cout<<"\nmarks:";
	cin>>marks;
	cout<<"\ncourse:";
	cin>>course;
	cout<<"\nschool:";
	cin>>school;
	cout<<"\ncontact:";
	cin>>contact;
	cout<<"\nemail:";
	cin>>email;
}
void stud::display(void)
{
	cout<<"data of student:\n";
	cout<<"name:"<<name<<endl<<"rollno:"<<rollno<<endl<<"marks:"<<marks<<endl<<"course:"<<course<<endl<<"school:"<<school<<endl<<"contact:"<<contact<<endl<<"email:"<<email<<endl;
}
main()
{
	s1.get();
	s1.display();
	s2.get();
	s2.display();
}
