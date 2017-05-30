#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
main()
{
	int i;
	char str[80];
	cout<<"enter string:";
	cin>>str;
	int len=strlen(str);
	ofstream e;
	e.open("XYZ.txt",ios::trunc);
	fstream file;
	file.open("XYZ.txt",ios::in|ios::out);
	for(i=0;i<len;i++)
	file.put(str[i]);
	file.seekg(0);
	char ch;
	while(file)
//while(!file.eof())	
	{
		//file.get(ch);
		ch=file.get();
		cout<<ch;
	}
}
