#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll q;
    cin >> q;
    while (q--) {
        string s,t,temp;
        cin >> s >> t;
        auto found=s.find(t[0]);
        int i,j,k,len;
        if (found==string::npos) {
            cout << "NO\n";
            continue;
        }
        while (found!=string::npos) {
            stack<string> st;
            temp="";
            i=0;
            while (found+i<size(s) && i<size(t) && s[found+i]==t[i]) {
                temp+=t[i];
                if (found+i-1>=0 && i+1<size(t) && s[found+i-1]==t[i+1]) {
                    st.push(temp);
                }
                i++;
            }
            if (i==size(t)) {
                cout << "YES\n";
                break;
            }
            while (!st.empty()) {
                temp=st.top();
                // cout << temp << endl;
                st.pop();
                len=size(temp);
                i=0;
                while (found+len-1-i>=0 && len-1+i<size(t) && s[found+len-1-i]==t[len-1+i]) {
                    i++;
                }
                if (len-1+i==size(t)) {
                    cout << "YES\n";
                    temp=t;
                    break;
                }
            }
            if (temp==t) {
                break;
            }
            found=s.find(t[0],found+1);
        }
        if (temp!=t) {
            cout << "NO\n";
        }
    }
    return 0;
}
