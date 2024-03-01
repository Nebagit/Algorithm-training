#include<iostream> 
  using namespace std; 
  int last=0,n;
  int main()
  { cout <<"enter your number";
  cin>>n;
  while (n>0)
  {
  cout<<last;
  
 
  last=n%10;
   n=n/10;


  }
  }