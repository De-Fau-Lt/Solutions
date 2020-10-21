#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if(!(n&1))
    {
        printf("%d",1 << n/2);
        return 0;
    }
    cout << 0;
}