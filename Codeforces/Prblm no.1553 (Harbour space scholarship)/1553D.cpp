#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    while (q--) {
        string s,t;
        cin >> s >> t;
        int n=size(s),m=size(t),i,j;
        for (i=n-1,j=m-1;i>=0 && j>=0;) {
            if (s[i]==t[j]) {
                i--;
                j--;
            }
            else {
                i-=2;
            }
        }
        if (j==-1) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
