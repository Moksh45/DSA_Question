#include <iostream>
using namespace std;
void getdata(int arr[], int size)
{
    cout << "Enter the Element Of an Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int LinerSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int BinarySearch(int arr[], int size, int element)
{
    int low, high, mid;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = low +(high-low) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter the Size of The Array\n";
    cin >> size;
    int arr[size];
    getdata(arr, size);
    cout << "Array :-\n";
    display(arr, size);
    int element;
    cout << "Enter the Element Which You Want to Search in Array\n";
    cin >> element;
    cout << "-1 Means Element not Present in Array\n";
    cout << "Output with Liner Search " << LinerSearch(arr, size, element) << endl;
    cout << "Output with Binary Search " << BinarySearch(arr, size, element) << endl;
    return 0;
}
