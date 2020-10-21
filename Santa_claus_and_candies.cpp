#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++) arr[i]=i+1;
    
    int i=0;
    int j=n-2;
    vector<int> res={n};
    vector<int> temp;
    int sum=arr[0];

    while(i<j)
    {
        if(sum+arr[j] < n)
        {
            temp.push_back(arr[i]);
            i++;
            sum+=arr[i];
        }
        else if(sum+arr[j]>n)
        {
            sum-=temp.back();
            temp.pop_back();
        }
        else if(sum+arr[j]==n)
        {
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);

            if(temp.size() >= res.size())
            {
                res.clear();
                res = temp;
            }
            temp.clear();
            sum=arr[0];
            i=0;
            j--;
        }
    }

    printf("%d\n",res.size());
    for(auto x:res)
        printf("%d ",x);
}

int main() 
{ 
    ios_base::sync_with_stdio(false);cin.tie(NULL); 

    /*#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("error.txt", "w", stderr); 
    freopen("output.txt", "w", stdout); 
    #endif*/

    int t=1; 
    ///*is Single Test case?*/cin>>t; 
    while(t--) 
    { 
        solve(); 
        cout<<"\n";
    } 

    cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
    return 0; 
}