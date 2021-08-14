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
        ll i,n,m,ans=0;
        cin >> n >> m;
        // We have to check for the condition where n^ans>=m
        m++;
        // n[i] means i-th digit from left
        for (i=30;i>=0;i--) {
            // If n[i]=m[i] then we can keep ans[i]=0 because we need min value of ans
            if ((n>>i & 1)==(m>>i &1)) {
                continue;
            }
            // If n[i]=1, m[i]=0 then by keeping ans[i]=0 then n^ans>m
            if ((n>>i &1)>(m>>i & 1)) {
                break;
            }
            // If n[i]=0, m[i]=1 then we must take ans[i]=1 because n^ans must be greater than m
            ans|=1<<i;
        }
        cout << ans << endl;
    }
    return 0;
}
