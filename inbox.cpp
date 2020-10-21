#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (auto &x : arr)
        scanf("%d", &x);
    int z = n - 1;
    while (arr[z] != 1)
        z--;
    bool f = false;
    int m = 0;
    for (int i = 0; i <= z; i++)
    {
        if (arr[i] == 1 && !f)
        {
            f = true;
            m++;
        }
        else if (f)
        {
            if (arr[i] == 1)
                m++;
            else
            {
                m += 2;
                while (arr[i] != 1)
                    i++;
            }
        }
    }
    printf("%d", m);
}