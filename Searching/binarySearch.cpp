#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int first = 0;
    int last = n;
    int mid;

    while (first <= last)
    {
        mid = (first + last) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << " Enter no. of elements in array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << "th element of array :" << endl;
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key : ";
    cin >> key;

    cout << binarySearch(arr, n, key);
    return 0;
}