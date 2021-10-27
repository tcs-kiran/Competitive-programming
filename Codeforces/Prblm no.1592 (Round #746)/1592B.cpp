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
        ll i,j,k,n,x;
        cin >> n >> x;
        vector<ll> vec(n),vec1;
        for (i=0;i<n;i++) {
            cin >> vec[i];
        }
        vec1=vec;
        sort(vec1.begin(),vec1.end());
        for (i=0;i<n;i++) {
            if (vec[i]!=vec1[i]) {
                if (i-x<0 && i+x>=n) {
                    cout << "NO\n";
                    break;
                }
            }
        }
        if (i==n) {
            cout << "YES\n";
        }
    }
    return 0;
}
