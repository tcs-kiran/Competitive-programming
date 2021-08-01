#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,m,k;
        cin >> n >> m >> k;
        if (n%2==0 && m%2==0) {
            if (k%2==0) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
            continue;
        }
        if (n%2==0 && m%2) {
            if (k%2==0 && k<=((n/2)*(m-1)) ) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
            continue;
        }
        if (n%2 && m%2==0) {
            if ((k-(m/2))%2==0 && k>=(m/2)) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
            continue;
        }
    }
    return 0;
}
