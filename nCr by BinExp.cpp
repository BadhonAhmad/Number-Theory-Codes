#include <bits/stdc++.h>
using namespace std;
#define int long long
const int M = 1e9 + 7;
const int N = 1e6+10;

int binExp(int a,int b,int m){
    int ans=1;
    while (b)
    {
        if(b&1)
        ans=(ans*a)%m;
        a=(a*a)%m;
        b>>=1;
    }
    return ans;    
}
int fact[N];
int32_t main()
{
    int n,r;
    
    cin>>n>>r;

    fact[0]=1;
    for(int i=1; i<N; ++i){
        fact[i]=(fact[i-1]*i)%M;
    }

    int ans=fact[n];
    int rr=(fact[r]*fact[n-r])%M;

    cout<<(ans*binExp(rr,M-2,M))%M<<endl;// ->nCr

    return 0;
} 
