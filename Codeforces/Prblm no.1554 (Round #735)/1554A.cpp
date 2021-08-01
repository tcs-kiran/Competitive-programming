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
        ll i,j,k,n,a,b,ans=0;
        cin >> n;
        vector<ll> vec(n);
        for (i=0;i<n;i++) {
            cin >> vec[i];
        }
        for (i=0;i<n-1;i++) {
            ans=max(ans,vec[i]*vec[i+1]);
        }
        cout << ans << endl;
    }
    return 0;
}
