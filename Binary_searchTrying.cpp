#include<iostream>
using namespace std;
int main(){
    int n,i,mid,right,left;
    double searched;
   bool found=false;
//    accept the array
    cout<<"no of index";
    cin>>n;

     left=0;
    right=n-1;

    double arr1[n];
    for(i=0;i<n;i++){
        cout<<"enter the "<<i+1<<"th term";
        cin>>arr1[i];
    }
    cout <<"enter the no to be searched";
    cin>>searched;
    // the logic starts here
    for(i=0;i<n;i++){
       mid=(right+left)/2;
       if(searched==arr1[mid]){
        cout<<"the number you want is found at "<<mid<<"th index."<<endl;
         found=true;
       }
       if(searched<arr1[mid]){
        right=mid-1;
       }
       else{
        left=mid+1;
       }

    }
    if(found==false){
        cout<<"Sorry the element is no found here."<<endl;
    }
}