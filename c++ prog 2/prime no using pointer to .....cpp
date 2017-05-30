#include<iostream>
using namespace std;
class prime
{
	public:
	int n,c,i;
		void find( )
		{
			//cout<<"enter value ";
			//cin>>"x";
			//n=x;
			
    for(i=1,c=0;i<=n;i++)
	{
		if (n%i==0)
		c=c+1;
	}
		if(c==2)
		cout<<"prime";
		else
		cout<<"not prime";
	   }
	  void fun(int x)
	   {
	   	 for(i=1,c=0;i<=x;i++)
	{
		if (x%i==0)
		c=c+1;
	}
		if(c==2)
		cout<<endl<<"prime"<<endl;
		else
		cout<<endl<<"not prime"<<endl;
	   }
	   
}o;
main()
{
	int k;
	prime *p;//obj
	p=&o;
	cout<<"enter num";
	cin>>k;
	p->n=k;//poin to obj
	p->find();
	void (prime::*l)(int)=&prime::fun;//poin to meme fun
	(o.*l)(k);
	int prime::*u=&prime::n;//poin to data mem
	o.*u=k;
	o.find();
}

