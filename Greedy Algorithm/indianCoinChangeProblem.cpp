#include <bits/stdc++.h>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << " Enter no. of rupees available : " << endl;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cout << " Enter the value of which exchange has to be calculated:  " << endl;
    cin >> x;

    sort(a.begin(), a.end(), greater<int>());
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += x / a[i];
        x -= x / a[i] * a[i];
    }
    cout << ans << endl;
    return 0;
}