#include <iostream>
void friendly( );
void shy(int audience_count);
int main( )
{
 using namespace std;
 friendly( );
 shy(6);
 cout << "One more time:\n";
 shy(2);
 friendly( );
 cout << "End of program.\n";
 return 0;
}
void friendly( )
{
 using namespace std;
 cout << "Hello\n";
}
void shy(int audience_count)
{
 using namespace std;
 if (audience_count < 5)
 return;
 cout << "Goodbye\n";
}
