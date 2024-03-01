#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
char fileName[30],data[10010100];


fstream neba;

neba.open("nebaa.txt",ios::in);
if(!neba)
{
cout<<"\nthere is an error !!!";
cout<<"\nlets create a file please wait";
neba.open(fileName,ios::out);
if(!neba)
{
    cout<<"\nthe file is not opened ";
}
else  cout<<"\nthe file is opened nowyou can edit";
}
else 
cout<<"\nthe file is created successfully.";
neba.close();
neba.open(fileName,ios::out);
cout<<"\nenter the data you want to add :";
gets(data);
int n;
while( n){
    neba>>data;
    cout<<"\nenter 1 to continue adding your data";
    cin>>n;
}
}
