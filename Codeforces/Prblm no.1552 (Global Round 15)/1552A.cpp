#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int i,n,ans=0;
        cin >> n;
        string s,str;
        cin >> s;
        str=s;
        sort(str.begin(),str.end());
        for (i=0;i<n;i++) {
            if (str[i]!=s[i]) {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
