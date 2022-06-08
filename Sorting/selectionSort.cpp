#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    return 0;
}