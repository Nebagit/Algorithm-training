#include <iostream>
using namespace std;
void fun1(int n);
int main( )
{
int n;
cin>>n;
fun1(n);

}
void fun1(int n)
{
int i = 0;
if (n > 1)

	fun1(n - 1);
    cout<<endl;
for (i = n; i >0; i--)
	cout << " * ";








    
    
}


// This code is contributed by shubhamsingh10






