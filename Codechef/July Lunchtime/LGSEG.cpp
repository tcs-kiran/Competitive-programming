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
        ll i,j,n,k,s,res=0;
        cin >> n >> k >> s;
        vector<ll> vec(n+1,0),func(n+2),ans(n+2);
        for (i=1;i<=n;i++) {
            cin >> vec[i];
            vec[i]+=vec[i-1];
        }
        // func contains the index till where sum<s
        // ans contains the location for k segments
        for (i=1;i<=n+1;i++) {
            func[i]=upper_bound(vec.begin(),vec.end(),vec[i-1]+s)-vec.begin();
            ans[i]=i;
        }
        // using the concept of binary lifting
        // we are writing k=25 as 1+8+16 and solving
        while (k) {
            if (k & 1ll) {
                for (i=1;i<=n+1;i++) {
                    ans[i]=func[ans[i]];
                }
            }
            for (i=1;i<=n+1;i++) {
                func[i]=func[func[i]];
            }
            k=k>>1;
        }
        for (i=1;i<=n;i++) {
            res=max(res,ans[i]-i);
        }
        cout << res << endl;
    }
    return 0;
}

// If code not understood, watch this video (https://www.youtube.com/watch?v=Q8Hb1YtwMeQ)
