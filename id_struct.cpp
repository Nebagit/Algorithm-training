#include<iostream>
#include<fstream>
using namespace std;
struct student
{    
    unsigned ID ;
    float marks[5];
    float average;
    unsigned rank;

};
float accept_ave(int,student s1[]);

int i,j,a, counter,n;
float sum=0;


int main()

{
  student s1[n];
  accept_ave(n,s1);
  

return 0;
}


float accept_ave(int n,student s1[] )
  {
    cout<<"enter number of students ";

    cin >>n;

    for(i=0;i<n;i++)
        {
          cout <<"enter your ID ";
          cin>>s1[i].ID;

          for(int j=0;j<5;j++)
                      {
                             cout<<"enter the mark of the  "<<j+1<<" subject  the student has taken ";
                             cin>>s1[i].marks[j];
                             cout<<endl;
                      }

        }
        cout<<endl<<endl;
          cout<<"The average befor it is arranged "<<endl<<endl<<endl<<endl;

      cout<<"NO\t\t\t"<<"ID\t\t\t"<<"average"<<endl;
cout<<"========================================================================================"<<endl;
       for(i=0;i<n;i++)
         {

         for(j=0;j<5;j++)
            {
                  sum =sum+ s1[i].marks[j];      

             }
               s1[i].average=sum/5;


cout <<i+1<<" student "<<i+1<<"\t\t"<<s1[i].ID<<"\t\t\t"<<s1[i].average<<endl;
    sum=0;

}
for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
        { 
          if(s1[i].average<=s1[j].average)
                  {
                  int temp;
                  temp=s1[i].average;
                  s1[i].average=s1[j].average;
                  s1[j].average=temp;
                  }
        }
  }
  cout<<endl<<endl;
  cout<<"The average after it is arranged from highest to lowest order "<<endl<<endl<<endl<<endl;
 cout<<"NO\t\t\t"<<"average"<<endl;
        cout<<"========================================================================================="<<endl;
      
  for(i=0;i<n;i++)
  {
         cout <<i+1<<" student "<<i+1<<"\t\t\t"<<s1[i].average<<endl;
  }


  int rank=1;
s1[0].rank=1;
for (int i=1;i<n;i++)
{
    if(s1[i].average==s1[i-1].average)
    {
        s1[i].rank=s1[i-1].rank;
        rank++;
    }
    else
    {
        rank++;
        s1[i].rank=rank;

    }

}
cout<<endl<<endl;

 cout<<"The average, and  rank  of the students is: "<<endl<<endl<<endl<<endl;
 cout<<"NO\t\t\t"<<"average\t\t\t"<<"rank"<<endl;
        cout<<"================================================================="<<endl;
      
  for(i=0;i<n;i++)
  {
         cout <<i+1<<" student "<<i+1<<"\t\t\t"<<s1[i].average<<"\t\t\t"<<s1[i].rank<<endl;
  }
fstream stu_info;
  
stu_info.open("roster.txt",ios::app);
   if(stu_info.is_open())
   {

 stu_info<<"\n\n"<<"\tNo\t\t"<<"id\t\t"<<"average\t\t"<<"rank\n";

 for(i=0;i<n;i++)
 {
   stu_info<<"student "<<i+1<<"\t"<<s1[i].ID<<"\t\t"<<s1[i].average<<"\t\t"<<s1[i].rank<<endl;
 }
stu_info.close();
   }
 return 0;
  
  }

   


