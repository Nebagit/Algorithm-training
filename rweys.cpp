#include<iostream>
int isPalen( int n,int );
using namespace std;
int main()
{
   int n;
   cin>>n;
   int res=isPalen(n,0);
   if(res==n)
   cout<<"yes";
   else
   cout<<"no";

}
int isPalen( int n,int res )
{
if(n==0)
return res;
res=res*10+n%10;
return isPalen(n/10,res);

}