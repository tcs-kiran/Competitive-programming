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
        ll i,j,k,n,ans=1,loc=0,g=0;
        cin >> n;
        vector<ll> vec(n+1);
        for (i=1;i<=n;i++) {
            cin >> vec[i];
        }
        for (i=2;i<=n;i++) {
            g=__gcd(g,abs(vec[i]-vec[i-1]));
            if (g>1) {
                ans=max(ans,i-loc);
            }
            else {
                g=0;
                loc=i;
                j=0;
                while (g!=1) {
                    j=g;
                    g=__gcd(g,abs(vec[loc]-vec[loc-1]));
                    loc--;
                }
                g=j;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
