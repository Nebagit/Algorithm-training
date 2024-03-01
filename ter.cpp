#include <iostream>
using namespace std;
int n,k,c,res;
int power(int n,int k);
int main()
{
cout <<"power ";
cin>>k;
cout <<"enter the base ";
cin>>n;
res=power(n,k);
cout <<"the number will be "<<res<<endl<<endl;

for(;k>=0;k--)
      {
          cout <<n<<"^"<<k<<" = "<<power(n,k)<<endl;
      }


}
int power(int n,int k)
{
    if (k==0)
       return 1;
    else 
        return n*power(n,k-1);


}