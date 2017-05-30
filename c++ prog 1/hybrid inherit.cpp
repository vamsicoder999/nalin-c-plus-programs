#include<iostream>
using namespace std;
class marks1
{
	public:
		int cse,maths;
		void getdata()
		{
			cin>>cse>>maths;
		}
};
class marks2
{
	public:
		int phy,eng;
		void getdata()
		{
			cin>>phy>>eng;
		}
};
class addition:public marks1,public marks2
{
	public:
		int result;
		void display()
		{
			result=cse+maths+phy+eng;
			cout<<"result="<<result;
		}
};
class percentage:public addition
{
	public:
		float percent;
		void show()
		{
	        percent=((float)result/400)*100;
	        cout<<endl<<percent;
		}
};
main()
{
	percentage p;
	p.marks1::getdata();
	p.marks2::getdata();
	p.display();
	p.show();
}
