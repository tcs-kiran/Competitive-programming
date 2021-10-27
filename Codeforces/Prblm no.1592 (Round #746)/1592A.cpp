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
        ll i,j,k,n,h,ans=0;
        cin >> n >> h;
        vector<ll> vec(n);
        for (i=0;i<n;i++) {
            cin >> vec[i];
        }
        sort(vec.begin(),vec.end());
        j=vec[n-1]+vec[n-2];
        ans=h/j;
        if (j*ans!=h) {
            if ((j*ans)+vec[n-1]>=h) {
                cout << (2*ans)+1 << endl;
            }
            else {
                cout << 2*(ans+1) << endl;
            }
        }
        else {
            cout << 2*ans << endl;
        }
    }
    return 0;
}
