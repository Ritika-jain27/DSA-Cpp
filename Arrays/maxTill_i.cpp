#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int n, mx = INT_MIN;
    cout << "Enter the size of your array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " Element of array : ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout<< mx<< endl;
    }

    return 0;
}