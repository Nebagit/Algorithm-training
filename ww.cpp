#include<iostream>
using namespace std;
int global(int,int);
int m,n;
int a=4 ,b=5;
int main()
{ a=1;
b=0;

cout<<::a<<endl;
cout<<::b<<endl;
  int global(int , int );


return 0;

}
int global(int a,int b)
{
   
cout<<a<<endl;
cout<<b<<endl;
}