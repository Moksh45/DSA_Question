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

void insertion(int arr[], int size, int index, int element)
{
    size += size;
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}

int main()
{
    cout << "Enter the Side of an Array ";
    int size;
    cin >> size;
    int arr[size + 10];
    getdata(arr, size);
    cout << "Present Array\n";
    display(arr, size);
    int index, element;
    cout << "Enter the Index Number and Element Which You want to update in array ";
    cin >> index >> element;

    insertion(arr, size, index, element);
    size += 1;
    display(arr, size);

    return 0;
}