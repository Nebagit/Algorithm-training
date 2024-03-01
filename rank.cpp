
#include<iostream>
using namespace std;
struct s {
    int avg;
    int rank;
};
int main(){

 s stu[5];
stu[0].avg=5;
stu[1].avg=4;
stu[2].avg=3;
stu[3].avg=3;
stu[4].avg=1;
 int rank=1;
stu[0].rank=1;
for (int i=1;i<5;i++){
    if(stu[i].avg==stu[i-1].avg)
    {
        stu[i].rank=stu[i-1].rank;
        rank++;
    }
    else{
        rank++;
        stu[i].rank=rank;

    }

}


for (int i=0;i<5;i++)

{
    cout<<"Average"<<"\t"<<"rank"<<endl;
    cout<<stu[i].avg<<"\t"<<stu[i].rank<<endl;

}
    return 0;
}


 /*fstream stu_info;

   stu_info.open("roster.txt",ios::app);

 stu_info<<"\n\n"<<"\tNo\t\t"<<"id\t\t"<<"average\t\t"<<"rank\n";

 for(i=0;i<n;i++)
 {
   stu_info<<"student "<<i+1<<"\t"<<s1[i].ID<<"\t\t"<<s1[i].average<<"\t\t"<<s1[i].rank<<endl;
 }
stu_info.close();*/
/* float average(int n,student s1[])
  {
    
       for(i=0;i<n;i++)
         {

         for(j=0;j<5;j++)
            {
                  sum =sum+ s1[i].marks[j];      

             }
               s1[i].average=sum/5;

cout<<"NO\t\t"<<"ID\t\t"<<"average"<<endl;
cout<<"\t\t"<<"========================================================================================================="<<endl;
cout <<i+1<<" student "<<i+1<<"\t\t"<<s1[i].ID<<"\t\t"<<s1[i].average<<endl;
    sum=0;

}
 return 0;
  }
*/
//  average(n,s1);
//float average(int,student s1[]);
/*
  float sort ( int n,student s1[])
            {
              for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
        { 
          if(s1[i].average<=s1[j].average)
                  {int temp;
                  temp=s1[i].average;
                  s1[i].average=s1[j].average;
                  s1[j].average=temp;


                  }
        }
  }

 return 0;

            }*/