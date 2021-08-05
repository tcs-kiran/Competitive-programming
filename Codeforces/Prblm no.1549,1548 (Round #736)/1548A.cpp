#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll q,u,v,n,m,dead=0,z;
    cin >> n >> m;
    // Keeping count of how many people are greater than i in vec[i]
    vector<ll> vec(n+1);
    while (m--) {
        cin >> u >> v;
        if (u>v) {
            swap(u,v);
        }
        vec[u]++;
        if (vec[u]==1) {
            dead++;
        }
    }
    cin >> q;
    while (q--) {
        cin >> z;
        switch (z) {
            case 1: {
                cin >> u >> v;
                if (u>v) {
                    swap(u,v);
                }
                vec[u]++;
                if (vec[u]==1) {
                    dead++;
                }
                break;
            }
            case 2: {
                cin >> u >> v;
                if (u>v) {
                    swap(u,v);
                }
                vec[u]--;
                if (vec[u]==0) {
                    dead--;
                }
                break;
            }
            case 3: {
                cout << n-dead << endl;
            }
        }
    }
    return 0;
}
