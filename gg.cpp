#include <iostream>
using namespace std;
int n;
void asteriks(int n);
int main( )
{ 
       cout<<"enter your number : ";
      
      cin>>n;
        asteriks(n);
}
 void asteriks( int n)
 {
     if(n>=1)
     cout<<"* ";
     
     asteriks(n-1);
     
}