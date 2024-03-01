#include<iostream>
using namespace std;
int n,i,sum=0;
void excusion(int );
void check( int );
int main ()
{
    
cout <<"enter your number : ";
cin>>n;
excusion(n);
check(n);

return 0;

}


void excusion(int n )
{

for(i=1;i<n;i++)
{  if(n%i==0)
sum=sum+i;
}


cout<<sum<<endl;

}

void check( int n)
{

if (n==sum)
    {   
        cout<<"the number is perfect number ."<<endl;  
    }
    else 
    cout<<"it is not perfect number ."<<endl;
}