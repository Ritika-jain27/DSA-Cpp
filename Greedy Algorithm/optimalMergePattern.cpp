#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(a[i]);
    }

    int ans = 0;
    while (pq.size() > 1)
    {
        int e1 = pq.top();
        pq.pop();
        int e2 = pq.top();
        pq.pop();
        ans += e1 + e2;
        pq.push(e1 + e2);
    }

    cout << ans << endl;

    return 0;
}