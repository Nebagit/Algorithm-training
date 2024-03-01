#include<iostream>
using namespace std;
int main ()
{char ch,str[100];
int i=0,val;
cout<<"enter the string ";
gets(str);
cout<<"\ncharacter\t\tASCII value\n";
while(str[i])
{
    ch=str[i];
    val=ch;
    cout<<ch<<"\t\t\t"<<val<<endl;
    i++;
}

cout<<"the length of the string is :\t"<<i;
}