#include<iostream>
using namespace std;
class fact
{
	public:
		int n,i,f=1;
		void get()
		{
			cout<<"enter no\n";
			cin>>n;
		
		}
		void display()
		{
		    for(i=1;i<=n;i++)
			f=f*i;
			cout<<"fact is"<<f;
		}		
}s;
main()
{
	s.get();
	s.display();
}
