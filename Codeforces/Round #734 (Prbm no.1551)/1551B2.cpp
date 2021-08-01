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
        int i,j=1,n,k,len,count=0;
        cin >> n >> k;
        vector<int> vec(n),ans(n,0),temp;
        map<int,int> m;
        map<int,vector<int>> loc;
        for (i=0;i<n;i++) {
            cin >> vec[i];
            loc[vec[i]].push_back(i);
            m[vec[i]]++;
            if (m[vec[i]]<=k) {
                count++;
            }
        }
        count=count/k;
        for (auto it=loc.begin();it!=loc.end();it++) {
            temp=it->second;
            len=size(temp);
            len=min(len,k);
            for (i=0;i<len;i++) {
                ans[temp[i]]=j;
                j++;
                if (j==k+1) {
                    j=1;
                    count--;
                }
                if (count==0) {
                    break;
                }
            }
            if (count==0) {
                break;
            }
        }
        for (i=0;i<n;i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
