#include<iostream>
using namespace std;

int main(){
   
    int i,n,temp,j;
     float ele[n];

    cout<<"how many marks?"<<endl;
    cin>>n;
    cout <<"enter the student marks\n";

for(  i=0;i<n;i++)
{
    cout <<"enter the "<<i+1<<" term :";
     cin>>ele[i];

}


for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)

{
if(ele[i]==ele[j])
{
    int temp;
    temp=i;
    cout<<ele[i]<<" has the frequiency "<<temp<<endl;

}

}

}
}