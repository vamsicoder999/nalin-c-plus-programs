#include<iostream>
using namespace std;
class rup
{
        int a;
        public:
        rup(int y)
        {
                a=y;
        }
        void display()
        {
                cout<<a;
        }
        
        
};
class dol
{
        int d;
        public:
                dol(int dd)
                {
                        d=dd;  
                }
                operator rup()
                {
                        return (d*60.5);
                }
        
};

main()
{
        cout<<"Enter money in dollar\n";
        int x;
        cin>>x;
        dol d(x);
        rup r(0);
        r=d;
        r.display();        
}

