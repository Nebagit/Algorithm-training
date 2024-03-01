#include <iostream>
using namespace std;         
int main(){
int n,i,j;
    cout<<"enter the numbers of terms you want "<<endl;
    cin>>n;
    double arr[n];
    double diff[n];
    double qutient[n];
        for(i=0;i<n;i++){
        cout<<"please enter the "<<i+1<<" th term ";
        cin>>arr[i];
        cout<<endl;
    }
        for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                double temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
for(i=0;i<n-1;i++){
       j=i+1;
        diff[i]=arr[j]-arr[i];
        j++;
        }
    
    for(i=0;i<n-1;i++){
      j=i+1;
        qutient[i]=arr[j]/arr[i];
        j++;
      
    }

     for(i=0;i<n-1;i++){
        cout<<"the "<<i+1<<" th difference ="<<diff[i]<<endl;
    }
    cout<<endl;
      for(i=0;i<n-1;i++){
        cout<<"the "<<i+1<<" th qutient ="<<qutient[i]<<endl;
    }
        cout<<endl;
         for(i=0;i<n-1;i++){
            if((diff[i+1]==diff[i])&&(qutient[i+1]==qutient[i])){
cout<<"It is both Arthmetic and Geometric progerssion"<<endl;
            break;
        }
       
        if(qutient[i+1]==qutient[i]){
            cout<<"It is Geometiric progresion"<<endl;
                        break;
        }
         if(diff[i+1]==diff[i]){
            cout<<"it is arthmetic progression"<<endl;
            break;
        }
        
        if((diff[i+1]!=diff[i])&&(qutient[i+1]!=qutient[i])){
cout<<"It is niether of Arthmetic nor Geometric progerssion"<<endl;
            break;
        }
    }

    }

