#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j,k,t;
    cin >> t;
    // Vector to store elements of the sequence
    vector<ll> vec(1001);
    j=1;
    for (i=1;i<=1000;i++) {
        while (j%3==0 || j%10==3) {
            j++;
        }
        vec[i]=j;
        j++;
    }
    while (t--) {
        cin >> k;
        cout << vec[k] << endl;;
    }
    return 0;
}
