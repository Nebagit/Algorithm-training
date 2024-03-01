/*#include<iostream>
using namespace std;
int n,m,a;
int main ()
{
cout <<"enter two numbers ";
cin>>n>>m;
if(n>m)
a=n;
else
a=m;
while (1)
{
      if((a%n==0)&&(a%m==0))
            break;
      else
            a++;
}

cout<<"the LCM of two numbers is : "<<a<<endl;

while (1)
{
    if ((n%a==0)&&(m%a==0))
         break;
    else 
         a--;
}
cout <<"the GCF of the two numbers is : "<<a<<endl;

return 0;
}*/

#include<iostream>
using namespace std;
void LCM(int ,int );
void GCF(int ,int );
int n,m,a;
int main ()
{
cout <<"enter two numbers ";
cin>>n>>m;
if(n>m)
a=n;
else
a=m;

LCM(n,m);
GCF(n,m);
}

void LCM(int n ,int m )
{
    while (1)
{
      if((a%n==0)&&(a%m==0))
            break;
      else
            a++;
}

cout<<"the LCM of two numbers is : "<<a<<endl;

}

void GCF(int n,int m )
{
    while (1)
    {
        if((n%a==0)&&(m%a==0))
            break;
        else 
            a--;
    }

  cout <<"the GCF of the two numbers are :"<<a<<endl;  
  
  
  }