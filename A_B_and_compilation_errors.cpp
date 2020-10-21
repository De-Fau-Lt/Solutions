#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    ll sum=0;
    ll sum1=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        sum+=x;
    }
    for(int i=0;i<n-1;i++)
    {
        int x;
        cin >> x;
        sum1+=x;
    }

    cout << sum-sum1 << endl;

    sum=0;

    for(int i=0;i<n-2;i++)
    {
        int x;
        cin >> x;
        sum+=x;
    }
    cout << sum1-sum << endl;

    /*int arr[n];
    for(auto &x:arr)
        scanf("%d",&x);

    int arr2[n-1];
    for(auto &x:arr2)
        scanf("%d",&x);
    
    vector<int> arr3(n-2);

    for(auto &x:arr3)
        cin >> x;
    
    sort(arr,arr+n);
    sort(arr2,arr2+(n-1));

    int i=0;
    int j=0;
    int ans=0;
    while(i<n && j<(n-1))
    {
        if(arr[i] != arr2[j])
        {
            ans = arr[i];
            i++;
        }
        else
        {
            i++;
            j++;
        }
    }
    while(i<n)
        ans = arr[i++];
    
    printf("%d\n",ans);

    arr3.push_back(ans);
    sort(arr3.begin(),arr3.end());


    i=0;
    j=0;
    while(i<n && j<(n-1))
    {
        if(arr[i] != arr3[j])
        {
            printf("%d\n",arr[i]);
            i++;
        }
        else
        {
            i++;
            j++;
        }
    }
    while(i<n)
        cout << arr[i++] << endl;*/
}