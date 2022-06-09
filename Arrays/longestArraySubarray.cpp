// Question:-

// An arithmetic array is an array that contains at least two integers and the
// differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
// and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
// not arithmetic arrays.
// Sarasvati has an array of N non-negative integers. The i-th integer of the array is
// Ai
// . She wants to choose a contiguous arithmetic subarray from her array that has
// the maximum length. Please help her to determine the length of the longest
// contiguous arithmetic subarray.
// Input
// The first line of the input gives the number of test cases, T. T test cases follow.
// Each test case begins with a line containing the integer N. The second line
// contains N integers. The i-th integer is Ai
// .

// Output
// For each test case, output one line containing Case #x: y, where x is the test case
// number (starting from 1) and y is the length of the longest contiguous arithmetic
// subarray.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of your array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " Element of array : ";
        cin >> arr[i];
    }
    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 2;
    int curr = 2;

    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            curr++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }
        ans=max(ans,curr);
        j++;
    }

    cout<<ans;

    return 0;
}