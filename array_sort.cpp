#include<iostream>
using namespace std;
int accept(int arr[],int );
int sort( int arr[],int);

int main ()
{
    int n;
    int arr[n];
accept ( arr,n);
sort( arr,n);
 
 cout<<"sorted no :";
 
 for( int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
 


return 0;


}
int accept(int arr[50],int n)
{int i;
cout<<"numbers";
cin>>n;
for(i=0;i<n;i++)
{cout<<"enter "<<i+1 <<"term";
cin>>arr[i];

}
return 0;
}

   
   
   
   
   int sort( int arr[50],int n)
{
     int i,j,temp;
  
  for(i=0;i<n;i++)

       {   for( j=i+1;j<n;j++)

             {
                   if(arr[i]>arr[j])
    
                      {
        temp=arr[i];
       arr[i]=arr[j];
        arr[j]=temp;

                       }
              
              }


        }
       

}

