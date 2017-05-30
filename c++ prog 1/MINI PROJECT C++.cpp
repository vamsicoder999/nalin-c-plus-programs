#include<iostream>
#include<string>
#include<stdlib.h>
#include<fstream>
using namespace std;
class medicine
{
	string name;
	int id,price;
	char c;
	public:
		void add();
		void search();
};
inline  void medicine :: add()
{
	A:
	system("cls");
	cout<<"enter the name,id and price of the medicine";
	fstream f("MEDICINE.txt",ios::in|ios::app);
	cin>>name>>id>>price;
	f<<name<<id<<price;
	f.close();
	cout<<"your medicine is successfully inserted into the MRS!!";
	cout<<"if you want to insert more enter y or N";
	cin>>c;
	if(c=='y')
	 goto A;
}
inline void medicine :: search()
{
	int cid;
	system("cls");
	cout<<"ENTER the id of the medicine to search";
	cin>>cid;
	fstream fo("MEDICINE.txt",ios::out);
	while()
	{
	if(cid==id)
	{
	fo>>name>>price;
	cout<<"\n NAME ID AND PRICE OF MEDICINE ARE:\n";
	cout<<name<<ends<<cid<<ends<<price;	 
    }
}
}
main()
{
	cout<<"\t\t\t\t\t\tMEDICAL MANAGEMENT SYSTEM\n";
	string username,password;
	/*cout<<"ENTER USERNAME";
	cin>>username;
	//if(username!="vamsi")
	 exit(1); 
	cout<<"ENTER PASSWORD";
	cin>>password;
	if(password!="allow")
	 exit(1);*/
	 
	 medicine m;
	 //m.add();
	 m.search();
}
