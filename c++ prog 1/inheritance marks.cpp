#include<iostream>
using namespace std;
class marks
{
	public:
		int a[5];
		int i;  
		void get()                      //SINGLE LEVEL//
		{
			for(i=0;i<5;i++)
			cin>>a[i];
		}
};
class perc:public marks
{
	public:
		int s=0;
		float p;
		void add()
		{
			for(i=0;i<5;i++)
			s=s+a[i];
		p=s/5;
	    }
		void show()
		{
			cout<<"total marks="<<s<<endl<<"percentage="<<p;
		}
}o;
main()
{
	o.get();
	o.add();
	o.show();
}
