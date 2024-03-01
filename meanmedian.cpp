#include<iostream>
using namespace std;
int n,i,j,temp,sum;

void readList(float [],int );
void arrange(float [], int );
void display(float[], int);
void range(float [],int);
void mean(float [],int);
void median(float [],int);

int main ()
{ 
    int n;
    cout<<"how many subjects?"<<endl;
    cin>>n;
    float  ele[n];
    readList(ele,n);
    arrange( ele,n );
    display(ele,n);
    range (ele,n);
    mean(ele,n );
    median(ele,n);
return 0;

}

void readList(float  ele[], int n )
{
    cout <<"enter the student marks\n";

for(  i=0;i<n;i++)
{
    cout <<"enter the "<<i+1<<" term :";
     cin>>ele[i];

}
}


void arrange(float ele[], int n )
{
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(ele[i]>ele[j])
        {
           temp=ele[i] ;
           ele[i]=ele[j];
           ele[j]=temp;
        }
    }
}

}


void display(float ele[], int n){
    for(i=0;i<n;i++)
{
    cout<<ele[i]<<"\t";
}
cout<<endl<<endl;
}

void range(float  ele[], int n )
{
    cout <<"the range is : "<<ele[n-1]-ele[0]<<endl;
}

void mean(float  ele[], int n )
{float sum=0,counter=0;
    for(i=0;i<n;i++)
    {
         sum=sum+ele[i];
         counter ++;
    }

    cout<<"the mean is : "<< sum/counter<<endl;
}


void median(float ele[],int n)
{   
     if(n%2==0){
         float med=ele[n/2-1]+ele[n/2];
    cout<<" the median value is "<<med/2<<endl;
     }

     else  
     
           cout<<" the median value is "<<ele[n/2]<<endl;
     

}