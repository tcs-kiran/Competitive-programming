#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

// This is a complete brute force method
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll i,j,k,n;
        char ch;
        string s;
        cin >> k;
        cin >> s;
        map<int,int> m,count;
        for (i=0;i<k;i++) {
            if (m[s[i]-'0']==0) {
                m[s[i]-'0']=i+1;
            }
            count[s[i]-'0']++;
        }
        if (m[1]) {
            cout << "1\n1\n";
            continue;
        }
        if (m[4]>0) {
            cout << "1\n4\n";
            continue;
        }
        if (m[6]) {
            cout << "1\n6\n";
            continue;
        }
        if (m[8]) {
            cout << "1\n8\n";
            continue;
        }
        if (m[9]) {
            cout << "1\n9\n";
            continue;
        }
        if (count[3]>1) {
            cout << "2\n33\n";
            continue;
        }
        if (count[5]>1) {
            cout << "2\n55\n";
            continue;
        }
        if (count[7]>1) {
            cout << "2\n77\n";
            continue;
        }
        if (count[2]>1) {
            cout << "2\n22\n";
            continue;
        }
        if (count[2] && count[5] && m[2]<m[5]) {
            cout << "2\n25\n";
            continue;
        }
        if (count[2] && count[7] && m[2]<m[7]) {
            cout << "2\n27\n";
            continue;
        }
        if (count[3] && count[5] && m[3]<m[5]) {
            cout << "2\n35\n";
            continue;
        }
        if (count[5] && count[7] && m[5]<m[7]) {
            cout << "2\n57\n";
            continue;
        }
        if (count[7] && count[5] && m[7]<m[5]) {
            cout << "2\n75\n";
            continue;
        }
        if (count[3] && count[2] && m[3]<m[2]) {
            cout << "2\n32\n";
            continue;
        }
        if (count[5] && count[2] && m[5]<m[2]) {
            cout << "2\n52\n";
            continue;
        }
        if (count[7] && count[2] && m[7]<m[2]) {
            cout << "2\n72\n";
            continue;
        }
    }
    return 0;
}
