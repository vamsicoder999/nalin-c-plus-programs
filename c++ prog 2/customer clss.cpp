#include<iostream>
using namespace std;
class Customer
{ 
    public:
	void accept()
	{
	cout << "Accepting Customer Details"<< endl;
	}
	void display()
	{
	cout << "Displaying Customer Details" << endl;
	}
		};

main()
	{
		Customer C1;
		C1.accept();
		C1.display();
}

