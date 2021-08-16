#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    // We have to check either one of the sides of the whole substring with ? because both sides give you the same imperfectness
    while (t--) {
        ll i,j,k,n,left,right;
        cin >> n;
        string s;
        cin >> s;
        for (i=0;i<n;) {
            j=i;
            left=i;
            while (s[j]=='?' && j<n) {
                j++;
            }
            right=j;
            if (left==0 && right==n) {
                s[0]='R';
                for (k=1;k<n;k++) {
                    if (s[k-1]=='B') {
                        s[k]='R';
                    }
                    else {
                        s[k]='B';
                    }
                }
                break;
            }
            if (left>0) {
                for (k=left;k<right;k++) {
                    if (s[k-1]=='B') {
                        s[k]='R';
                    }
                    else {
                        s[k]='B';
                    }
                }
            }
            else {
                for (k=right-1;k>=left;k--) {
                    if (s[k+1]=='B') {
                        s[k]='R';
                    }
                    else {
                        s[k]='B';
                    }
                }
            }
            i=right+1;
        }
        cout << s << endl;
    }
    return 0;
}
