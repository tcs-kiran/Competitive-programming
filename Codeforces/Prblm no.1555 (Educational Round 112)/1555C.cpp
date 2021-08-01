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
        ll i,j,k,m,x,up=0,down=0,ans=INT_MAX;
        cin >> m;
        vector<vector<int>> vec(2,vector<int>(m));
        for (i=0;i<2;i++) {
            for (j=0;j<m;j++) {
                cin >> vec[i][j];
            }
        }
        for (i=1;i<m;i++) {
            up+=vec[0][i];
        }
        for (x=0;x<m-1;x++) {
            ans=min(ans,max(up,down));
            up-=vec[0][x+1];
            down+=vec[1][x];
        }
        ans=min(ans,max(up,down));
        cout << ans << endl;
    }
    return 0;
}
