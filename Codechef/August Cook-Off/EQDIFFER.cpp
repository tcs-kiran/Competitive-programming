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
        // The array can have all same elements or an array of size of 2 with distinct elements
        ll i,j,k,n,high=0;
        cin >> n;
        vector<ll> vec(n);
        for (i=0;i<n;i++) {
            cin >> vec[i];
        }
        if (n<3) {
            cout << "0\n";
            continue;
        }
        map<int,int> m;
        for (i=0;i<n;i++) {
            m[vec[i]]++;
        }
        for (auto it=m.begin();it!=m.end();it++) {
            if (it->second>high) {
                high=it->second;
            }
        }
        if (high>=2) {
            cout << n-high << endl;
        }
        else {
            cout << n-2 << endl;
        }
    }
    return 0;
}
