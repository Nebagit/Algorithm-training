#include<iostream>
using namespace std;
int main ()
{
int grade,n,sum=0;
 
cout<<"enter your number of subjects"<<endl;
cin >>n;
for(int i=0;i<n;i++)
{
do   {cout <<"enter the " <<i+1<<"  grade in number between one and five : ";
cin >>grade;}

while(grade<1||grade>5);
sum =sum+grade;
}
cout<<"sum = "<<sum<<endl;
cout<<"average is : "<<(float) sum/n;
}