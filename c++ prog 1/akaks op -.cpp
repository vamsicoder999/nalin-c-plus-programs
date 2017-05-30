#include<iostream>
using namespace std;
class stud
{
	private:
		int a,b;
		public:
			get(int x,int y)
			{
				a=x;
				b=y;
			}
			stud operator+(stud &s2)
			{
				stud i;
				
				return i;
			}
			void display()
			{
				cout<<a<<endl<<b;
			}
};
main()
{
	int p,q;
	cin>>p>>q;
	stud l,o;
	o.get(p,q);
	l=o++;
	o.display();
	cout<<endl;
	l.display();
}
