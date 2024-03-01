#include<iostream>
#include<string>
using namespace std;
void accept();
void binary();
int main(){
    binary();
}

void accept(){
int n,i,search;
    cout<<"Enter the Index of the array: ";
    cin>>n;
    double pack1[n];
    for(i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<"th item: ";
        cin>>pack1[i];
    }
   
    cout<<"Enter the number to be searched: ";
    cin>>search;
}

void binary(){
    void accept();
    int n,i,search;
    double pack1[n];

int left=0;
    int right=n-1;
    for(int i=0;i<n;i++){
        int middle=(left+right)/2;
        if(search==pack1[middle]){
          cout<<" The number you searched is found at "<<middle<<"th index."<<endl;
        }
        if(search>pack1[middle]){
                left=middle+1;
        }
       else{
           right=middle-1;
        }
    }
}
