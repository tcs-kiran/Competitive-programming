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
        ll n;
        cin >> n;
        if (n==1) {
            cout << "a\n";
            continue;
        }
        if (n==2) {
            cout << "ab\n";
            continue;
        }
        if (n==3) {
            cout << "abc\n";
            continue;
        }
        string s(n,'a');
        s[(n/2)-1]='b';
        if (n%2==1) {
            s[n-1]='c';
        }
        cout << s << endl;
    }
    return 0;
}
