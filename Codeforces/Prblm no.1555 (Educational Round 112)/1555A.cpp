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
        ll i,j,k,n,ans=0;
        cin >> n;
        if (n<=6) {
            cout << "15\n";
            continue;
        }
        if (n%2) {
            n++;
        }
        cout << n*5/2 << endl;
    }
    return 0;
}
