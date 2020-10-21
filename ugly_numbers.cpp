#include <bits/stdc++.h>

using namespace std;

bool p_fact(int n){
        if(!n)
                return false;
        while(n%2==0)
        {
                n/=2;
        }

        for(int i=3;i*i<=n;i+=2)
        {
                if(i <= 5 && n%i==0)
                {
                        while(n%i==0)
                                n/=i;
                }
                if(i>5 && n%i==0)
                        return false;
        }
        if(n > 1)
        {
                if(n == 5 || n==3)
                        return true;
                else
                        return false;
        }
        return true;
}

int main(){
        int n;
        cin >> n;
        int i=1;
        int c=0;
        while(true)
        {
                if(p_fact(i))
                        c++;
                if(c==n)
                        break;
                i++;
        }
        cout << i << endl;
}

