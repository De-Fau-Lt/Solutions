#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        double a;
        cin >> a;

        double n = 360/(180-a);

        if(n == floor(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}