// If (i,j) is beautiful pair, then (j,i) is also beautiful.
// A pair (i,j) is beautiful if Ai!=Aj

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll i,j,k,n,temp,ans,a,b;
        cin >> n;
        vector<ll> vec;
        map<ll,ll> m;
        for (i=0;i<n;i++) {
            cin >> temp;
            m[temp]++;
        }
        for (auto it=m.begin();it!=m.end();it++) {
            vec.push_back(it->second);
        }
        ans=n*(n-1);
        for (i=0;i<size(vec);i++) {
            ans-=vec[i]*(vec[i]-1);
        }
        cout << ans << endl;
    }
    return 0;
}
