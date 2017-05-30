#include <iostream>
#include <string.h>
using namespace std;
class sample
{
char s[30];
public:
void getdata()
{
gets(s);
}

int operator==(sample ob)
{
if(strcmp(s,ob.s)==0)
return 1;
else
return 0;
}

};
int main()
{
sample s1,s2;
s1.getdata();
s2.getdata();
int t=s1==s2;
cout << t;
return 0;
}
