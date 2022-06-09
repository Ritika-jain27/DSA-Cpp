#include <iostream>
#include<climits>
using namespace std;

int main()
{

    int n;
    int max_num=INT_MIN;
    int min_num = INT_MAX;
    cout << "Enter the size of your array: ";
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int j=0;j<n;j++)
    {
        max_num=max(max_num , arr[j]);
        min_num=min(min_num , arr[j]);
    }

    cout<<" Maximum no. in array is : "<<max_num<<endl;
    cout<<" Minimum no. in array is : "<<min_num<<endl;
    return 0;


}