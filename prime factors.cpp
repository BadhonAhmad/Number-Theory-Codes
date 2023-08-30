#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
const int N = 1e7 + 10;

vector<bool> isPrime(N, 1);
vector<int> hp(N, 0), lp(N, 0);
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            hp[i] = lp[i] = i;
            for (int j = 2 * i; j < N; j += (i))
            {
                isPrime[j] = false;
                hp[j] = i;
                if (lp[j] == 0)
                    lp[j] = i;
            }
        }
    }
    int num;
    cin >> num;

    vector<int> prime_facotrs;
    while (num > 1)
    {
        int factor = hp[num];
        while (num % factor == 0)
        {
            num /= factor;
            prime_facotrs.push_back(factor);
        }
    }
    for(auto it:prime_facotrs) cout<<it<<' ';
    return 0;
}
