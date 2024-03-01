#include <iostream>
using namespace std;
void BinarySearch(double arr[], int n, double searched);
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
    BinarySearch(arr, n, searched);
}

void BinarySearch(double arr[], int n, double searched)
{
    int left = 0;
    int right = n - 1;
    for (int i=0;i<n;i++){
        int middle = (left + right) / 2;
        if (searched == arr[middle])
        {
            cout << "The number is found at: " << middle;
            break;
        }
        if (searched < arr[middle])
        {
            right = middle - 1;
        }
        if (searched > arr[middle])
        {
            left = middle + 1;
        }
    }
}
