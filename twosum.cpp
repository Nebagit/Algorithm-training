#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the targeted number";
    cin >> a;
    cout << "\nenter the index";
    cin >> b;

    int nums[b];
    int ind[0];

    for (int i = 0; i < b; i++)
    {
        cout << "\nEnter the " << i + 1 << " th Term: ";
        cin >> nums[i];
    }

    for (int i = 0; i < b; i++)
    {

        for (int j = 0; j < b; j++)
        {
            int n = nums[i] + nums[j];
            if (n == a)
            {
                ind[i] = i;
                c++;
                ind[i + 1] = j;
                c++;
            }
            n = 0;
        }
    }
             ind[c];

    cout << "[ ";
    for (int i = 0; i < c; i++)
    {
        cout << ind[i] << ",";
    }
    cout << "]" << endl;
}
