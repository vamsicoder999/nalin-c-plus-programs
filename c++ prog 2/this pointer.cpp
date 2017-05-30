#include<iostream>
using namespace std;
class book
{
	char name[15];
	float price;
	public:
		void get()
		{
			cout<<"enter value of name and price\n";
			cin>>name>>price;
			cout<<this<<endl;
		}
		void adress()
		{
			cout<<"address of object:"<<this<<endl;
		}
};
int main()
{
	book b1,b2;
	b1.get();
	b2.get();
	b2.adress();
}

