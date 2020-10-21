#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[2 * n];
    unordered_set<int> s;

    for (auto &x : arr)
    {
        cin >> x;
        s.insert(x);
    }
    if (s.size() == 1)
        cout << -1;
    else
    {
        sort(arr, arr + (n * 2));
        for (int i = 0; i < n * 2; i++)
        {
            cout << arr[i];
            if (i != (n * 2) - 1)
                cout << " ";
        }
    }
}