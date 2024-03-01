#include<iostream> 
  using namespace std; 
  int n;

  int main()
  { cout <<"enter your number";
  cin>>n;
    int last=n%10;
   
  while (n>0)
  {
  cout<<last <<endl;

     n=n/10;
 
  last=n%10;

  }
 
  }