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
        ll i,j,k,n;
        char ch='z';
        string s;
        cin >> s;
        for (i=0;i<s.size();i++) {
            if (s[i]<=ch) {
                j=i;
                ch=s[i];
            }
        }
        s.erase(s.begin()+j);
        cout << ch << " " << s << endl;
    }
    return 0;
}
