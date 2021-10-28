#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll i,j,k,n,a,b,ans=0,val=0;
        cin >> n;
        vector<pair<ll,ll>> vec(n);
        // b is the min value of hero's power to complete a cave
        for (i=0;i<n;i++) {
            cin >> k;
            b=0;
            for (j=0;j<k;j++) {
                cin >> a;
                b=max(b,a-j+1); 
            }
            vec[i]={b,k};
        }
        sort(vec.begin(),vec.end());
        for (i=0;i<n;i++) {
            ans=max(ans,vec[i].first-val);
            val+=vec[i].second;
        }
        cout << ans << endl;
    }
    return 0;
}
