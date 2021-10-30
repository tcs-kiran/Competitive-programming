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
        ll i,j,k,n,time=0,count=1;
        cin >> n >> k;
        while (count<n && k>count) {
            count+=count;
            time++;
        }
        if (count<n) {
            time+=(n-count)/k;
            if ((n-count)%k) {
                time++;
            }
        }
        cout << time << endl;
    }
    return 0;
}
