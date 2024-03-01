#include <iostream>
using namespace std;
int main(){
    int n,i,searched,implicator;
    cout<<"Enter the number of indexes: ";
    cin>>n;
    double pack[n];
    for(i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" th term: ";
        cin>>pack[i];
    }
    cout<<"Enter Any number you want to search: ";
    cin>>searched;
    for(i=0;i<n;i++){
        if(pack[i]==searched){
            implicator=1;
            cout<<"The number you want is found at the "<<i+1<<"th place of the elements."<<endl;
                    break;
            }
    }
    
    if(implicator==0){
        cout<<"The elment you want is not found here."<<endl;
    }

}