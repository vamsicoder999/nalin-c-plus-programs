#include<iostream>
using namespace std;
class student
{
	public:
		int a,b;
		void getdata()
		{
			cout<<"enter the value of a and b";
			cin>>a>>b;
		}
}r;
/*class calc:public student
{
	public:
		int c,d;
		void get()
		{
			cout<<"enter the values of c and d";
			cin>>c>>d;
		}
		
}q;
//MULTILEVEL
class avg:public calc
{
	public:
		int j,k,e;
		void getd()
		{
			cout<<"enter the value of j and k";
			cin>>j>>k;
		}
		void sum()
		{
			e=a+b+c+d+j+k;
			cout<<"sum is"<<e;
		}
};*/
class put
{
	public:
		int t;
		void take()
		{
			cout<<"enter value of t";
			cin>>t;
		}
}l;
class mul:public student,public put      //MULTIPLE
{
	public:
		int z;
		void show()
		{
			z=a+b+t;
			cout<<endl<<"product="<<z;
    	}
}o;
main()
{
	//avg r;
	//c.get();
//	c.student::getdata();
//	c.calc::getdata();
    r.getdata();
    /*r.get();
    r.getd();
    
	r.sum();*/
	l.take();
	o.show();
}
