#include <iostream>
using namespace std;
void insertionSort(double arr[], int n);
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter the " << i + 1 << " th element: ";
        cin >> arr[i];
    }

    insertionSort(arr, n);
}

void insertionSort(double arr[], int n)
{
    int i, key;
    for (i = 0; i < n; i++)
    {
        key=arr[i];
        for (int j = i; j >= 0; j--)
        {
            if (arr[j-1] > arr[j])
            {
                key = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = key;
            }
        }
    }
        
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
}