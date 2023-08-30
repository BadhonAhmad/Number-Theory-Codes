#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
const int N=1e5+7;
vector<int>divisors[N];
int sum[N];

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i=2; i < N; i++){
        for(int j=i; j < N; j+=i){
            divisors[j].push_back(i);
            sum[j]+=i;
        }
    }
    for(int i=0; i<10; i++){
        for(auto div:divisors[i]){
            cout<<div<<' ';
        }
        
        cout<<"sum ="<<sum[i]<<endl;
        
    }
    return 0;
}
