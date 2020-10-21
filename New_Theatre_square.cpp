#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        int n,m,x,y;
        scanf("%d %d %d %d",&n,&m,&x,&y);

        int t=0;
        int o=0;

        for(int i=0;i<n;i++)
        {
            string arr;
            cin >> arr;
            for(int j=0;j<m;j++)
            {
                if(j==m-1)
                {
                    if(arr[j]=='.')
                        o++;
                }
                else
                {
                
                    if(arr[j] == '.' && arr[j+1] == '.')
                    {
                        t++;
                        j++;
                    }
                    else if(arr[j] == '.' && arr[j+1] == '*')
                        o++;
                }
            }
        }
        
        int ans = t*min(x+x,y);
        ans+=o*x;

        printf("%d\n",ans);
    }
}