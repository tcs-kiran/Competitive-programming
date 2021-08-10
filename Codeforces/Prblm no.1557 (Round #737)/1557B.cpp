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
        ll i,j,l=0,n,k,count=0;
        cin >> n >> k;
        vector<ll> vec(n),vec1;
        map<ll,ll> m;
        for (i=0;i<n;i++) {
            cin >> vec[i];
            m[vec[i]]=i;
        }
        vec1=vec;
        // Sort the array and compare how many subarrays are present
        sort(vec1.begin(),vec1.end());
        for (i=0;i<n;) {
            j=m[vec1[i]];
            while (j<n && i<n && vec[j]==vec1[i]) {
                i++;
                j++;
            }
            count++;
            if (count>k) {
                cout << "NO\n";
                l=1;
                break;
            }
        }
        if (i==n && l==0) {
            cout << "YES\n";
        }
    }
    return 0;
}
