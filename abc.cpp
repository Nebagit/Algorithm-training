#include <iostream>
void figureMeOut(int& x, int y, int& z);
int main()
{
 using namespace std;
 int a, b, c;
 a = 10;
 b = 20;
 c = 30;
 figureMeOut(a, b, c);
 cout << a << " " << b << " " << c;
 return 0;
}
void figureMeOut(int& x, int y, int& z)
{
 using namespace std;
 cout << x << " " << y << " " << z << endl;
 x = 1;
 y = 2;
 z = 3;
 cout << x << " " << y << " " << z << endl;
}