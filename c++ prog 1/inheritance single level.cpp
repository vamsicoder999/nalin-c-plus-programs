#include<iostream>
using namespace std;
class person
{
	private:
		int age;
	public:
		char name[15];
		void get()
		{
			cin>>age>>name;
		//	cout<<age;
		}
};
class student:private person
{
	public:
		int marks;
		char course[10];
		void getdata()
		{
			get();
			cin>>marks>>course;
		}
		void display()
		{
			cout<<name<<marks<<course;
		}
};
main()
{
	student s;
	//s.get();
	s.getdata();
	s.display();
}
