#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (auto &x : arr)
            cin >> x;

        for (int i = n - 1; i >= 0; i--)
        {
            cout << arr[i];
            if (i != 0)
                cout << " ";
        }
        cout << endl;
    }
}