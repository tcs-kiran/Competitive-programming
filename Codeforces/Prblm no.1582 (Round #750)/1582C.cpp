#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

ll solve(string s, ll n) {
    ll i,j,k,left=0,right=n-1,count=0,ans=n+1;
    char ch;
    ch=s[left];
    while (left<right) {
        if (s[left]==s[right]) {
            left++;
            right--;
        }
        else {
            if (ch==s[left]) {
                count++;
                left++;
            }
            else {
                if (ch==s[right]) {
                    count++;
                    right--;
                }
                else {
                    break;
                }
            }
        }
    }
    if (left>=right) {
        ans=count;
    }
    left=0;
    right=n-1;
    count=0;
    ch=s[right];
    while (left<right) {
        if (s[left]==s[right]) {
            left++;
            right--;
        }
        else {
            if (ch==s[left]) {
                count++;
                left++;
            }
            else {
                if (ch==s[right]) {
                    count++;
                    right--;
                }
                else {
                    break;
                }
            }
        }
    }
    if (left>=right) {
        ans=min(count,ans);
    }
    if (ans==n+1) {
        ans=-1;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll i,j,k,n,ans,left,right;
        char ch;
        string s;
        cin >> n;
        cin >> s;
        ans=n+1;
        left=0;
        right=n-1;
        while (left<right) {
            if (s[left]==s[right]) {
                left++;
                right--;
            }
            else {
                ans=solve(s.substr(left,right-left+1),right-left+1);
                break;
            }
        }
        if (left>=right) {
            ans=0;
        }
        cout << ans << endl;
    }
    return 0;
}
