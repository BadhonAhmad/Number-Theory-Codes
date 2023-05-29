#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s,p;
    cin >> s >> p;
    int l1 = s.size(), f = 0, l2=p.size();

    for (int i = 0; i <= l1 - l2; i++){
        if(s[i] == p[0]){
            int j;
            for (j = 0; j < l2; j++){
                if (s[i + j] != p[j])
                break;
            }
            if(j == l2){
                f = 1;
                cout << "pattern found at index " << i << endl;
            }
        }
    }
    if(!f)
    cout << "pattern is not found" << endl;
    ///complexity:O(l2*(l1-l2))
}
