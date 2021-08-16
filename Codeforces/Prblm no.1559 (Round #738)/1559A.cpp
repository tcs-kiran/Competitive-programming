#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    // a&b=c then a>=c && b>=c, hence we are doing biwise AND for all values
    while (t--) {
        ll i,j,n,ans;
        cin >> n;
        vector<ll> vec(n);
        cin >> vec[0];
        ans=vec[0];
        for (i=1;i<n;i++) {
            cin >> vec[i];
            ans=ans&vec[i];
        }
        cout << ans << endl;
    }
    return 0;
}
