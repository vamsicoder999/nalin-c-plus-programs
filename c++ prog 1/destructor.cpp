#include<iostream>
using namespace std;
class abc
{

	public:
			int x;
		abc(int y)
		{
			x=++y;
		cout<<x;
		}
		~abc()
		{
			
		}
		void display()
	{
			cout<<endl<<x+1;
		}
 } ;
 main()
 {
 	abc a(5),a1(99),a2(1000);
 a.display();
 }
