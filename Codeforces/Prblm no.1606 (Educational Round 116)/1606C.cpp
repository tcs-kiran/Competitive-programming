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
        ll i,j,k,n,limit;
        string str;
        cin >> n >> k;
        vector<ll> vec(n);
        for (i=0;i<n;i++) {
            cin >> vec[i];
        }
        k++;
        i=0;
        while (k) {
            if (i==n-1) { // There is only 1 denomination left, hence add all those values
                str=to_string(k)+str;
                break;
            }
            limit=pow(10,vec[i+1]-vec[i])-1;
            str=to_string(min(limit,k))+str;
            i++;
            k-=min(limit,k);
        }
        cout << str << endl;
    }
    return 0;
}
