/*#include<iostream>
using namespace std;
int n,i ;
int fibonacci(int );
int main ()
{
cout <<"enter the number of classes";
cin>>n;

for(i=2;i<n;i++)
{
cout <<fibonacci(i)<<" , ";

}


}

int fibonacci(int n)
{
     if (n<=1)
     return n;
     else 
     return fibonacci(n-1)+fibonacci(n-2);
}*/


#include <iostream>
 using namespace std;
void write_vertical(int n);
 //Precondition: n >= 0.
//Postcondition: The number n is written to the screen vertically
 //with each digit on a separate line.

 int main( )
{
 cout << "write_vertical(3):" << endl;
 write_vertical(3);

 cout << "write_vertical(12):" << endl;
 write_vertical(12);

 cout << "write_vertical(123):" << endl;
write_vertical(123);

 return 0;
 }

//uses iostream:
 void write_vertical(int n)
{
 if (n < 10)
 {
 cout << n << endl;
 }
 else //n is two or more digits long:
{
 write_vertical(n / 10);
 cout << (n % 10) << endl;
 }
 }