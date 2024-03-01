#include<iostream>
#include<fstream>

using namespace std;
int main()
{  int i;
    char Name[i];
    int roll;
    fstream stu,stude;
    stu.open("student.txt",ios::out);
    if(stu.is_open())
    {
      for(i=0;i<2;i++)
      {
          cout<<"enter the name ";
          cin>>Name;
          cout<<"enter the roll no ";
          cin>>roll;
          stu<<"\n"<<roll<<"\t"<<Name;
      }
      stu.close();
    }
    
      stude.open("student.txt",ios::in);
     
      for(i=0;i<2;i++)
      {
         stude>>roll; 
         stude>>Name; 
         cout<<"\n"<<roll<<"\t"<<Name<<endl;

      }
    stude.close();
    }

    