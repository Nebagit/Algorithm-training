#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,c,x1,x2,D;
    int z;
    do{
    cout <<"Enter your quadratic equation of the form AX^2 + BX + C "<<endl;

do{
cout <<"Now please enter coffiecient of X^2 that is 'A' "<<endl;
cin>>a;
}while(a==0);
    // cout <<"Sorry this is not valid enter 'A' again different from 0";

cout <<" Please enter coffiecient of X that is 'B' "<<endl;
cin >>b;
cout<<"Now enter the constant C "<<endl;
cin>>c;
cout <<"Remember you have entered a quadratic equation :"<<a<<"X^2 + "<<b<<"X + "<<c<<endl;
D=(b*b)-(4*a*c);
x1=(-b+(sqrt(D)))/(2*a);
x2=(-b-(sqrt(D)))/(2*a);

if(D>0){
    cout<<"Roots are real and different"<<endl;
    cout<< "The first sollution is: "<<x1<<endl;
        cout<< "The second solution is: "<<x2<<endl;

// cout<<"Good your equation after it is factorized will be..... "<<endl;
// cout<<"[X - ("<<x1<<")]*[X - ("<<x2<<")]"<<endl;
}
else if(D<0){
cout <<"I am Sorrrrryyyyy   This is not valid on real number system "<<endl;
}
else  {
    cout<<"The roots are equals ";
    cout<<" The solution is: "<<x1<<" such that first solution is equal to the second solution"<<endl;
// cout<<"[X - ("<<x1<<")]^2"<<endl;

}

// else {
//     cout<<"Opps there might be Un expected Error please check your entry of  data again"<<cout;
// }


cout <<"Ok Now if you wnat to continue press 0"<<endl;
cin>>z;
    }while(z==0);

}