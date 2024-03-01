#include<iostream>
using namespace std;
int n,i,c;
int fibonacii(int);
int factorial(int );
int main ()
{
    cout<<" enter 1 for factorial\n"<<" enter 2 for fibonacii";
    cin>>c;
    if(c==1){
        cout<<"enter the number to find the factorial"<<endl;
        cin>>n;
        cout<<n<<"! = "<<factorial(n);
    }
 else if (c==2)  {
        cout<<"how many terms do you need "<<endl;
        cin>>n;
        cout<<"the "<<n<<"th fibinacic numbers are :";
        
        
        for(i=0;i<n;i++)  {
       cout<< fibonacii(i)<<" , ";
                }

                 }
   else cout<<"an error from your data";

    return 0; 
    }


int fibonacii(int n)
{    
    if(n<=1)
    return n;
   else
   return fibonacii(n-2)+fibonacii(n-1);
   
}

int factorial(int n)
{
    if(n==0)
    return 1;
    else 
    return factorial(n-1)*n;
}