#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,ans,val,count;
    cin >> n;
    if (n==1) {
        cout << "6\n";
    }
    else {
        ans=6;
        count=0;
        val=4;
        for (ll i=2;i<=n;i++) {
            val=val*val;
            val=val%MOD;
            ans*=val;
            ans=ans%MOD;
        }
        cout << ans%MOD << endl;
    }
    return 0;
}
