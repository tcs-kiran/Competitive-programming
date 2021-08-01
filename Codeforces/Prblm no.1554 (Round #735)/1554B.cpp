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
        ll i,j,k,n,a,b,ans=INT_MIN;
        cin >> n >> k;
        vector<ll> vec(n);
        for (i=0;i<n;i++) {
            cin >> vec[i];
        }
        for (i=n-1;i>=0;i--) {
            if (i*(i+1)<=ans) {
                break;
            }
            for (j=i-1;j>=0;j--) {
                if ((i+1)*(j+1)<=ans) {
                    break;
                }
                ans=max(ans,((i+1)*(j+1))-(k*(vec[i]|vec[j])));
            }
        }
        cout << ans << endl;
    }
    return 0;
}
