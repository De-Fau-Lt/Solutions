#include <bits/stdc++.h>

using namespace std;

int main()
{
        int t;
        scanf("%d",&t);

        while(t--)
        {
                int n;
                scanf("%d",&n);

                if(n==1 || n == 2 || n==4)
                        cout << -1;

                else if(n%3==0)
                        cout << n/3 << " " << 0 << " " << 0;

                else if(n%3==1)
                        cout << (n-7)/3 << " " << 0 << " " << 1;

                else
                        cout << (n-5)/3 << " "  << 1 << " " << 0;
                cout << "\n";
        }
        return 0;
}
