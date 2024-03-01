#include <iostream>
using namespace std;
int n;
void vertical(int n);
int main( )
{ cout<<"enter your number";
cin>>n;
vertical(n);
}
void vertical(int n)
{if(n<10)
cout<<n<<endl;
else{

cout<<n%10;
vertical(n/10);
}


}