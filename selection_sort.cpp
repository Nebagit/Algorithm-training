#include<iostream>
using namespace std;
void selectionSort(double arr[], int n);
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

    selectionSort(arr, n);
    
}

void selectionSort(double arr[], int n){
    int i,j;
    for( i=0;i<n-1;i++){
        int min=i;
        for( j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }

    for( i=0;i<n;i++){
cout<<arr[i]<<" ";
    }
}