#include <iostream>
using namespace std;
int n,temp,reversed;
int  reverse(int n);
int  palendrome(int );
int main( )
{ 
    
    cout<<"enter your number"<<endl;
     cin>>n;
        temp=n;
reverse(n);
cout<<endl;
cout<<"the number is "<<n<<endl;
palendrome (n);
return 0;

}

int reverse(int n)
{
    if(n<10)
           { return n;}
    else
         {
           int z=n%10;
           reverse(n/10);
           return reverse(n/10)*10+z;
         }
         

}

int  palendrome(int   n )
{
    
reversed=reverse(n);
if (temp==reversed)
          cout<<"the number "<<temp<<" is palendrome "<<endl;
else         
        cout<<"the number is not palendrome "<<endl;
       

}