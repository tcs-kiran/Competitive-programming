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
        ll i,j=1,k,n,one=0,zero=0;
        cin >> n;
        for (i=0;i<n;i++) {
            cin >> k;
            if (k==1) {
                one++;
            }
            if (k==0) {
                zero++;
                j*=2;
            }
        }
        cout << one*j << endl;
    }
    return 0;
}
