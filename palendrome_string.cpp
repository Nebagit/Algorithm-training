#include<iostream>

int n,i;
using namespace std;
int main ()
{
char name[200];

cout <<"please write your name";
gets( name);
char a =name[200];

cout <<"hello "<<name<<endl;
cout<<" your text is :    ";
for (i=0;i<200;i++)
{
    if (name[i]!='\0')
    cout<<name[i];
    n++;
}
cout<<endl<<endl <<"-----------------"<<endl;
 cout<<"the reversed text is    ";
for(i=n-1;i>=0;i--)
{
  cout<< name[i];
}
if (a==name[200])
cout <<"it is palandrome word ";
else
cout <<"it is not palandrome ";

}