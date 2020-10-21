#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, d;
        cin >> n >> k >> d;
        int arr[n];

        for (auto &x : arr)
            cin >> x;

        int r = INT_MAX;

        for (int i = 0; i <= n - d; i++)
        {
            unordered_set<int> s;
            for (int j = i; j < i + d; j++)
                s.insert(arr[j]);
            r = min(int(s.size()), r);
        }
        cout << r << endl;
    }
}