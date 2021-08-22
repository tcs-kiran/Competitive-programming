#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

// returns number of minimum number of moves to change given string to power of 2 of length l
ll solve(string s, vector<string> vec) {
    string str;
    ll l1=size(s),l=size(vec),l2=size(vec[0]),i,j,k,ans=20,temp;
    for (k=0;k<size(vec);k++) {
        str=vec[k];
        i=0;
        j=0;
        temp=0;
        while (i<l1 && j<l2) {
            if (s[i]==str[j]) {
                i++;
                j++;
            }
            else {
                temp++;
                i++;
            }
        }
        temp+=((l1-i)+(l2-j));
        ans=min(ans,temp);
        if (ans==abs(l1-l2)) {
            break;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j,k,n,t,ans=20;
    string str;
    // m[l] conatins strings which are powers of 2 of lenght l
    map<int,vector<string>> m;
    j=1;
    for (i=1;i<63;i++) {
        str=to_string(j);
        m[size(str)].push_back(str);
        j*=2;
    }
    cin >> t;
    while (t--) {
        cin >> str;
        ans=0;
        n=size(str);
        ans=max(solve(str,m[n]),ans);
        if (ans==0) {
            cout << "0\n";
            continue;
        }
        j=1;
        while (1) {
            ans=min(ans,solve(str,m[n+j]));
            if (n-j>0) {
                ans=min(ans,solve(str,m[n-j]));
            }
            if (ans==j) {
                break;
            }
            j++;
        }
        cout << ans << endl;
    }
    return 0;
}
