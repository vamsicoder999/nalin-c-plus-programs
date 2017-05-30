#include<iostream>
using namespace std;
class stud
{
	private:
		string name;
		int age;
	public:
	    void get(string a,int b)
		{
			name=a;
			age=b;
		}
		void show()
		{
			cout<<endl<<name<<" "<<age;
		}	
};
main()
{
	pair<string,int>a;
	pair<string,float>b;
	pair<char,int>c;
	pair<stud,string>d;
	a=make_pair("nalin",20);
	b=make_pair("book",15.6);
	c=make_pair('n',14);
	cout<<a.first<<" "<<a.second<<endl;
	cout<<b.first<<" "<<b.second<<endl;
	cout<<c.first<<" "<<c.second;
	stud o,s;
	o.get("neel",20);
	o.show();
	d=make_pair(o,"first object");
    s=d.first;          //s=o;
	s.show();
}
