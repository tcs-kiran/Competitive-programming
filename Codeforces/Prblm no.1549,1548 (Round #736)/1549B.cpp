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
        ll i,j,k,n,ans=0;
        cin >> n;
        string enemy,mine;
        cin >> enemy >> mine;
        // enemy[i]=0 => Empty
        // enemy[i]=1 => Enemy pawn present
        // enemy[i]=2 => My pawn present
        if (mine[0]=='1') {
            if (enemy[0]=='0') {
                ans++;
                enemy[0]='2';
            }
            else {
                if (enemy[1]=='1') {
                    ans++;
                    enemy[1]='2';
                }
            }
        }
        for (i=1;i<n-1;i++) {
            if (mine[i]=='1') {
                if (enemy[i]=='0') {
                    ans++;
                    enemy[i]='2';
                }
                else {
                    if (enemy[i-1]=='1') {
                        ans++;
                        enemy[i-1]='2';
                    }
                    else {
                        if (enemy[i+1]=='1') {
                            ans++;
                            enemy[i+1]='2';
                        }
                    }
                }
            }
        }
        if (mine[n-1]=='1') {
            if (enemy[n-1]=='0') {
                ans++;
                enemy[n-1]='2';
            }
            else {
                if (enemy[n-2]=='1') {
                    ans++;
                    enemy[n-2]='2';
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
