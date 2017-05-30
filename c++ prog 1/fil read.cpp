#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("out.txt");
    
    string name,roll,clas,section,contact,email;
    
    cin>>name>>roll>>clas>>section>>contact>>email;
    //Write string to the file.
    fout << name<<roll<<clas<<section<<contact<<email;

    fout.close();
    return 0;
}

