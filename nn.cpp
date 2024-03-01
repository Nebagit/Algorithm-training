#include <iostream>
using namespace std;
void cheers(int n);
int main( )
{
 cheers(3);
 return 0;
}
void cheers(int n)
{
if (n == 1)
{
 cout << "Hurray\n";
}
else
{
     cheers(n-1);
 cout << "Hip ";

 }
}