#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int M = 1e9 + 7;
//M == 1e18,a <= 1e18,b <= 1e18
int binMultiply(int a,int b){
    int ans=0;
    while (b)
    {
        if(b&1)
        ans=(ans+a)%M;
        b>>=1;
        a=(a+a)%M;
    }

    return ans;
}
int binExpIt(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1) ans = binMultiply(ans,a);
        b >>= 1;
        a = binMultiply(a , a);
    }
    return ans;
}
int32_t main()
{
    int a = 2, b = 10;
    cout << binExpIt(a, b) << endl;
    return 0;
} 
