#include<iostream>
using namespace std;
class student 
 {
    public:
         char name[20],course[20],school,email[30];
         int roll;long int reg_no;int marks;long int contact;
         
    public:   
          void display();
          void accept();
   };
   inline void student :: accept()
         {
             cout<<"\n\nENTER NAME :- ";
             cin>>name;
             
             cout<<"\nENTER ROLL_NUMBER :- ";
             cin>>roll;
             
             cout<<"\nENTER MARKS :- ";
             cin>>marks;
             
             cout<<"\nENTER registration no. :- ";
             cin>>reg_no;
             
             cout<<"\nENTER COURSE :- ";
             cin>>course;
             
             cout<<"\nENTER SCHOOL :- ";
             cin>>school;
             
             cout<<"\nENTER CONATCT :- ";
             cin>>contact;
             
            // cout<<"\nENTER EMAIL :- ";
             //cin>>email;
              } 
         
         void student :: display()
         {
              cout<<"\n\n\t DETAILS ARE ::";
              cout<<"\n NAME =  "<<name;
              cout<<"\n ROLL_NO =  "<<roll;
              cout<<"\n MARKS =  "<<marks;
              cout<<"\n REGISTRATION NO. =  "<<reg_no;
              cout<<"\n COURSE =  "<<course;
              cout<<"\n SCHOOL =  "<<school;
              cout<<"\n contact =  "<<contact;
               //cout<<"\n EMAIL =  "<<email;
                  }         
   
   main()
   {
       student s[3];
       int i;
       
       for(i=0;i<3;i++)
       {
               cout<<"\nENTER THE DETAILS OF THE STUDENT NO. "<<(i+1);
            s[i].accept();
       }
       
        for(i=0;i<3;i++)
       {
           cout<<"\nTHE DETAILS OF THE STUDENT NO. "<<(i+1);
            s[i].display();
            
       }
       
   }
   


