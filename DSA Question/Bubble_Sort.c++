#include <iostream>
using namespace std;

void bubbleSort(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortAdaptive(int *arr, int size)
{
    int temp;
    int isSorted = 0;
    for (int i = 0; i < size - 1; i++)
    {
        printf("Working on pass number %d\n", i + 1);
        isSorted = 1;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    // int arr[] = {22, 323, 1324, 14, 24, 44, 134};
    int arr[] = {1, 2, 3, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array With Bubble Sort\n";
    printArray(arr, n);
    bubbleSortAdaptive(arr, n);
    printArray(arr, n);
    return 0;
}