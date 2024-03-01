#include <iostream>
using namespace std;
int n,i,m,element=0,place,c;
int main(){

do
{
    cout <<"enter the number of elements you want  \n";
    cin>>n;
   int numbers[n];
    for (i=0;i<n;i++)
          {
             cout<<"please enter the "<<i+1<<" elemenet\n ";
               cin>>numbers[i];
          }

    cout <<" please enter the number you want to search from the elements\n ";
    cin>>m;

    for(i=0;i<n;i++)
           {
             if( m==numbers[i])
                  { 
                      element=1;
                      place=i;
                      break;
                  }
          }
if (element==1)

  cout <<"the number "<<m<<" is found in your entry of data at  "<<place+1<<"th place of array\n";

else 
cout <<"it doesnot exist in the data you entered\n";

cout <<"A). please enter any number with out 5 to continue\n "<<" B). please enter 5 to stop the programm\n ";
cin>>c;

}  while(c!=5);


return 0;

}