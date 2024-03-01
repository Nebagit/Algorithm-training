#include<iostream>
#include<fstream>
#include<string>

struct student{
    int rollNo;
    char name[30];
    struct {
             int schoolcode;
             char schoolname[30];
             int mark;
           }sub[3];
     int total;
     float percentage;       
              };
               int ch ,i,n;

             
             void create(int ,student s[]);
             void display();
             void append();
using namespace std;
int main ()
{
     cout<<"enter the number of students";
     cin>>n;
      student s[n];
     cout <<endl;
   
  do{
      cout<<"\n1.CREATE";
      cout<<"\n2.DISPLAY";
      cout<<"\n3.APPEND";
      cout<<"\n0.EXIT";
      cout<<"\nenter your choice";
      cin>>ch;
      switch(ch)
      {
          case 1:
              create(n,s);
              break;
          case 2:
              display();
              break;
          case 3 :
               append();
               break;
          case 0:


      }

      
  }while(ch!=0);
}

    void create(int n,student s[] )
    {

    }