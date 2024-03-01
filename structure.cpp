#include <iostream>
using namespace std;
int main()
{

struct ShoeType
{ 
 char style; 
 double price;
};

ShoeType shoe1, shoe2;
shoe1.style ='A';
shoe1.price = 9.99;
cout << shoe1.style << " $" << shoe1.price << endl;
shoe2 = shoe1;
shoe2.price = shoe2.price/9;
cout << shoe2.style << " $" << shoe2.price << endl;
return 0;
}