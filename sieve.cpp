#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
const int N=1e7+10;

vector<bool>isPrime(N,1);
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    isPrime[0]=isPrime[1]=false;
    for(int i=2; i<N; i++){
        if(isPrime[i] ==true){
            for(int j=2*i; j<N; j+=i){
                isPrime[j]=false;
            }
        }
    }
    int t=1; cin>>t;
    while(t--){
        
    }

    return 0;
}
