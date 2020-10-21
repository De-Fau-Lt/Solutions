#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    scanf("%d %d",&n,&k);

    int h[n];
    for(auto &x:h) scanf("%d",&x);

    int sum=0;
    for(int i=0;i<k;i++)
        sum+=h[i];
    
    int i=0;
    int j=k;
    int in=1;
    int temp=sum;
    while(j<n)
    {
        temp = temp-h[i];
        temp = temp+h[j];
        if(temp < sum)
        {
            in =i+2;
            sum=temp;
        }
        i++;
        j++;
    }
    printf("%d",in);
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