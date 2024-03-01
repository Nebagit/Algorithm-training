#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    fstream neba;
    

    neba.open("nebiyu.txt",ios::in);
    
    if(neba.is_open())
    {
      string line;
       while (getline(neba,line))
        {
            cout<<line<<endl;
        }
    }
 neba.open("nebiyu.txt",ios::app);
    if(neba.is_open())
    {int a ;
    neba<<a;}
     



} 