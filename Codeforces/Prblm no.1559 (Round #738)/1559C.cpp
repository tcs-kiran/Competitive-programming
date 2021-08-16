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
        ll i,j,n;
        cin >> n;
        if (n==1) {
            cin >> j;
            if (j==0) {
                cout << "1 2\n";
            }
            else {
                cout << "2 1\n";
            }
            continue;
        }
        vector<ll> vec(n+1);
        for (i=1;i<=n;i++) {
            cin >> vec[i];
        }
        if (vec[n]==0) {
            // A path is formed from n to n+1
            for (i=0;i<=n;i++) {
                cout << i+1 << " ";
            }
            cout << endl;
            continue;
        }
        if (vec[1]==1) {
            // A path is formed from n+1 to 1
            cout << n+1 << " ";
            for (i=1;i<=n;i++) {
                cout << i << " ";
            }
            cout << endl;
            continue;
        }
        // If 0 1 is found in the sequence at position j
        // Then we can go from 1->2->3....->j->n+1->j+1.....->n
        j=0;
        for (i=1;i<n;i++) {
            if (vec[i]==0 && vec[i+1]==1) {
                j=i;
            }
        }
        if (j==0) {
            cout << "-1\n";
            continue;
        }
        for (i=1;i<=j;i++) {
            cout << i << " ";
        }
        cout << n+1 << " ";
        for (i=j+1;i<=n;i++) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
