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

void quickSort(int *A, int n)
{
    int partitionIndex;

    partitionIndex = partition(a,low,high);
}
int main()
{

    int arr[] = {121, 22, 12321, 12, 177, 1, 42, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sorting" << endl;
    printArray(arr, n);
    cout << endl
         << "After Sorting" << endl;
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}