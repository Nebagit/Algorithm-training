#include<iostream>
#include<fstream>
#include<string>
unsigned int lineno=0,a,b;
using namespace std;
int main ()
{
    fstream FF;
FF.open("info.txt",ios::in);
if(FF.is_open())
{    string line;

   while(getline(FF,line))
   {
       lineno++;

       cout<<lineno<<": "<<line<<endl;
       a=lineno;
   }

}
FF.close();

FF.open("info.txt",ios::app);
if(FF.is_open())
{   
cout<<" how many lines do you want to add: ";
cin>>b;
cout<<endl;
string line;
while(b!=0 && getline(FF,line))
       a++;
       FF<<a<<": ";
  FF>>line;
  b--;
}

FF.close(  );

}

