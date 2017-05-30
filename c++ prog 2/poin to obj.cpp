#include<iostream>
using namespace std;
class Simple
{
 public:
 int a;
};

int main() 
{
 Simple obj;
 Simple *ptr;   // Pointer of class type
 ptr = &obj;
 ptr->a=10;
 cout << obj.a;
 cout << (*ptr).a;  // Accessing member with pointer
 cout<<ptr->a;
}
