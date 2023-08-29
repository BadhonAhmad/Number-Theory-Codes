#include <bits/stdc++.h>
using namespace std;
#define int long long
const int M = 1e9 + 7;

int binExpIt(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * a) % M;
        }
        b >>= 1;
        a = (a * a) % M;
    }
    return ans;
}
int32_t main()
{
    int a = 2, b = 13;
    cout << binExpIt(a, b) << endl;
    return 0;
}
