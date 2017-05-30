#include<iostream>
using namespace std;

	void area();
	void area(int);
	void area(float ,float);
	int main()
	{
		int r=10;
		float a=20.78,b=12.89;
	//	area();
		area(r);
	area(a ,b);
		return 0;
		
	}
	 void area(int r)
	 {
	 	int ar;
	 	cout<<"area of the circle:"<<endl;
	 	ar=3.14*r*r;
	 	cout<<"ar::"<<ar<<endl;
		 }
		 void area(float l,float b)
		 {
		 	float ar;
		 	cout<<"area of the triangle"<<endl;
		 	ar=0.5*l*b;
		 	cout<<"ar"<<ar<<endl;
		 }
