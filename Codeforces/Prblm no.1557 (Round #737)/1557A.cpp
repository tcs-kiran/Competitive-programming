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
        double i,j,k,n,sum=0,high=-1000000000;
        cin >> n;
        vector<ll> vec(n);
        for (i=0;i<n;i++) {
            cin >> vec[i];
            sum+=vec[i];
            if (vec[i]>high) {
                high=vec[i];
            }
        }
        cout << fixed << setprecision(7) << high+ ((sum-high)/(n-1)) << endl;
    }
    return 0;
}
