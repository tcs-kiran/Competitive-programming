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
        int n;
        cin >> n;
        if (n%3==0) {
            cout << n/3 << " " << n/3 << endl;
        }
        if (n%3==1) {
            cout << (n/3)+1 << " " << n/3 << endl;
        }
        if (n%3==2) {
            cout << (n/3) << " " << (n/3)+1 << endl;
        }
    }
    return 0;
}
