#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    scanf("%lld", &n);

    int arr[] = {1, 6, 28, 120, 496, 2016, 8128, 32640};

    int i = 0;
    int ma = 0;
    while (i < 8)
    {
        if (n % arr[i] == 0)
            ma = max(ma, arr[i]);
        i++;
    }
    printf("%d", ma);

    /*ll n2 = log2(n) + 1;
    string a;

    int j = 0;
    int cnt1 = 0;
    int cnt0 = 0;
    for (ll i = log2(n); i >= 0; i--)
    {
        if (n & (1 << i))
        {
            a += '1';
            cnt1++;
        }
        else
        {
            a += '0';
            cnt0++;
        }
        j++;
    }

    string a2 = a;
    sort(a2.rbegin(), a2.rend());
    if (a == a2 && cnt1 == (cnt0 + 1))
    {
        cout << n;
        return 0;
    }

    ll i = 1;
    string s = "1";
    ll ma = 0;
    while (i <= n / 2)
    {
        if (n % i == 0)
            ma = max(ma, i);
        s += '0';
        s = '1' + s;

        int k = 0;
        int l = 0;
        int dig = 0;
        for (int j = s.size() - 1; j >= 0; j--)
        {
            k = 1 << l++;
            if (s[j] == '1')
                dig += k;
        }
        i = dig;
    }
    printf("%lld", ma);*/
}