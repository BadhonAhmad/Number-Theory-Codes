#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int M = 1e9 + 7;

//if a<=1e18 b<=1e18 
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
int32_t main()
{
    int a = 2, b = 10;
    cout << binExp(50,binExp(64,32,M-1),M) << endl;
    return 0;
} 
