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
        string s;
        cin >> s;
        map<char,int> m;
        for (char ch:s) {
            m[ch]++;
        }
        int one=0,two=0;
        // one represents number of characters which are present only one time.Half of them are red and remaining green
        // two represents number of characters which are present more than one time.One of them can be colored red and other one green.
        for (auto it=m.begin();it!=m.end();it++) {
            if (it->second==1) {
                one++;
            }
            else {
                two++;
            }
        }
        cout << (one/2)+two << endl;
    }
    return 0;
}
