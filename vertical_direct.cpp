
#include <iostream>
 using namespace std;
int n;
void write_vertical(int n);
 
 int main( )
{cout<<"enter the number  ";
cin>>n;



 cout << "write_vertical( "<<n<<" ):" << endl;
 write_vertical(n);

 

 return 0;
 }

//uses iostream:
 void write_vertical(int n)
{
 if (n < 10)
 {
 cout << n << endl;
 }
 else //n is two or more 

{
 write_vertical(n / 10);
  cout << n % 10 << endl;
 }
 }