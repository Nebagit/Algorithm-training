#include <iostream>
using namespace std;
int n;
void backWard(int n);
int main( )
{ 
       cout<<"enter your number : ";
      
      cin>>n;
        backWard(n);
}
 void backWard( int n)
 {
     if(n>=1)
     cout<<n%10<<endl;
     
     backWard(n/10);
     
}