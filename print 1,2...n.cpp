#include <iostream>
using namespace std;
int n;
void numbers(int n);
int main( )
{ 
       cout<<"enter your number : ";
      
      cin>>n;
       numbers (n);
}
 void numbers( int n)
 { 
     if(n<=1)
    {cout<<" the numbers are:  ";}
   
  else   
       cout<<n<<",";
      numbers(n-1);
}