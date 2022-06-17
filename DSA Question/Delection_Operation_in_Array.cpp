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

void delection(int arr[], int size, int index)
{
    size += size;
    for (int i = index; i <= (size - 1); i++)

        arr[i] = arr[i + 1];
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
    int index;
    cout << "Enter the Index Number Of the Element Which You want to Delete from Array ";
    cin >> index;

    delection(arr, size, index);
    size -= 1;
    display(arr, size);

    return 0;
}