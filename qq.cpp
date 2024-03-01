#include <iostream>
using namespace std;
void c(int n);
int main( )
{
int n;
cin>>n;
c(n);




}void c(int n)
{
if(n>=1)


cout<<n <<" ";
c(n-1);


}
