// In C++ We can Initialize the Variables with Declaration in Structure.

#include <iostream>
using namespace std;

struct Point {
	int x = 0; // It is Considered as Default Arguments and no Error is Raised
	int y = 1;
}p1 ,P2, P3;

int main()
{
	

	// Accessing members of point p1
	// No value is Initialized then the default value is considered. ie x=0 and y=1;
	cout << "x = " << p1.x << ", y = " << p1.y<<endl;

	// Initializing the value of y = 20;
	p1.y = 20;
	cout << "x = " << p1.x << ", y = " << p1.y;
	return 0;
}
// This code is contributed by Samyak Jain
