#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main()
{
    string s,p;
    cin >> s >> p;
    int l1 = s.size(),l2=p.size();

    for (int i = 0; i <= l1 - l2; i++){
        if(s[i] == p[0]){
            int j;
            for (j = 0; j < l2; j++){
                if(s[i++] == p[j]){
                    continue;
                }
                else break;
            }
            if(j == l2){
                cout << "pattern is found at index =" << i-j+1 << endl;
                return 0;
            }
        }
    }//complexity=O(m*(n-m))
    cout << "pattern is not found" << endl;
}
