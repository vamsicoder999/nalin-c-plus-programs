#include<iostream>
using namespace std;
template<class t,class t1>
class student
{
	public:
		t cse;t1 maths;
		void getdata()
		{
			cin>>cse>>maths;
		}
		void display()
		{
			t1 result;
			result=cse+maths;
			cout<<result;
		}
};
main()
{
	student<int,float> s;
	s.getdata();
	s.display();
}
