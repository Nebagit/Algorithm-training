#include <iostream>
using namespace std;
void LinearSearch(double arr[], int n, int e);
int main()
{
    int n;
    double searched;
    cout << "Enter the number of elements: ";
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter the " << i + 1 << " th element: ";
        cin >> arr[i];
    }
    cout << "\n\nEnter the number you want to search: ";
    cin >> searched;
    LinearSearch(arr, n, searched);
}

void LinearSearch(double arr[], int n, int e)
{
    int i;
    int index = -1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == e)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        cout << "The number is not found in the array";
    }
    else
    {
        cout << "The index to which the number found is: " << index << endl;
    }
}