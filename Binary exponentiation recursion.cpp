#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
//binary exponentiation in replace of pow because pow returns a double valuse which 
//can occur an error

int binExpRec(int a,int b){
    if(b == 0) return 1;
    int res=binExpRec(a,b/2);
    if(b&1){//odd
        return (a*((res*1LL*res)%M))%M;
    }else{
        return (res*res*1LL)%M;
    }
}
int32_t main()
{
    int a=2,b=13;
    cout<<binExpRec(a,b)<<endl;
    return 0;
}
