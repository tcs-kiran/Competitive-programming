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
        ll i,j,k,loc;
        cin >> k;
        // loc = length of sqaure formed by the given number
        loc=ceil(sqrt(k));
        j=(loc-1)*(loc-1);
        if (k-j==loc) {
            cout << loc << " " << loc << endl;
            continue;
        }
        if (k-j<loc) {
            cout << k-j << " " << loc << endl;
            continue;
        }
        if (k-j>loc) {
            cout << loc << " " << 2*loc-(k-j) << endl;
            continue;
        }
    }
    return 0;
}
