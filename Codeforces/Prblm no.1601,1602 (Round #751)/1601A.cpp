#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

ll gcd(ll a, ll b) {
    if (a>b) {
        return gcd(b,a);
    }
    if (a==0) {
        return b;
    }
    return gcd(b%a,a);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll i,j,k,n,n1=0,ans;
        cin >> n;
        vector<ll> arr(31,0),vec;
        for (i=0;i<n;i++) {
            cin >> k;
            j=0;
            while (k) {
                if (k%2) {
                    arr[j]++;
                }
                k/=2;
                j++;
            }
        }
        for (i=0;i<31;i++) {
            if (arr[i]) {
                vec.push_back(arr[i]);
                n1++;
            }
        }
        if (n1==0) {
            for (i=1;i<=n;i++) {
                cout << i << " ";
            }
            cout << endl;
            continue;
        }
        ans=vec[0];
        for (i=1;i<n1;i++) {
            ans=gcd(ans,vec[i]);
        }
        for (i=1;i<=ans;i++) {
            if (ans%i==0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
