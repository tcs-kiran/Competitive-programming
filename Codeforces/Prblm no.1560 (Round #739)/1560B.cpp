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
        ll i,j,a,b,c,k;
        cin >> a >> b >> c;
        // k=(number of people)/2
        k=abs(b-a);
        if (c>2*k) {
            cout << "-1\n";
            continue;
        }
        if (a>k && b>k) {
            cout << "-1\n";
            continue;
        }
        if (c>k) {
            cout << c-k << endl;
        }
        else {
            cout << c+k << endl;
        }
    }
    return 0;
}
