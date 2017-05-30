#include<iostream>
using namespace std;
class conv
{
	int a,b;
	public:
	//	conv()
	//	{
	//	}
		conv(int k)
		{
			a=k/60;
			b=k%60;
		}
		void display()
		{
			cout<<a<<"hrs"<<b<<"mins"<<endl;
		}
};
main()
{
	conv s(0);
	int x;
	cout<<"enter time";
	cin>>x;
	s=x;
	s.display();
}
