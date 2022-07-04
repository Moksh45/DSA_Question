#include <iostream>
using namespace std;
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void insertionSort(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    //   0    1   2     3    4  5  6   7  8
    int arr[] = {1211, 322, 1213, 121, 2, 1, 42, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Before Sorting"<<endl;
    printArray(arr,n);
    cout<<endl<<"After Sorting"<<endl;
    insertionSort(arr,n);
    printArray(arr,n);
}