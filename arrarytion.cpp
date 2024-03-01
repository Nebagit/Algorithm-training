#include <iostream>
using namespace std;
    int a,b,i;
   void accepter(int arr[]);
   void publisher(int arr[]);
int main(){
             cout<<"enter the number of elements you want to creat ";
                cin>>a;
                  int arr[a];
       accepter(arr);
       publisher(arr);

    }

    void accepter(int arr[]){
           
           for(i=0;i<a;i++){
        cout<<"enter the "<<i+1<<"th element of your entry data "<<endl;
        cin>>arr[i];
       }
    
    }
    
    void publisher(int arr[]){
        for(i=0;i<a;i++){
if(arr[i]%5==0){
arr[i]=5;
}

} 

for(i=0;i<a;i++){
        cout<<arr[i]<<endl;
    }

    }