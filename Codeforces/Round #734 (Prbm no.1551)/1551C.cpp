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
        int i,j,k,n,sum,ans=0;
        cin >> n;
        vector<string> vec(n);
        vector<int> len(n),temp(n);
        vector<vector<int>> count(n,vector<int>(5,0));
        for (i=0;i<n;i++) {
            cin >> vec[i];
            len[i]=size(vec[i]);
            for (j=0;j<size(vec[i]);j++) {
                count[i][vec[i][j]-'a']++;
            }
            for (j=0;j<5;j++) {
                count[i][j]=2*count[i][j]-size(vec[i]);
            }
        }
        for (k=0;k<5;k++) {
            for (i=0;i<n;i++) {
                temp[i]=count[i][k];
            }
            sort(temp.begin(),temp.end(),greater<int>());
            j=0;
            sum=temp[0];
            while (j<n && sum>0) {
                j++;
                sum+=temp[j];
            }
            ans=max(ans,j);
            if (ans==n) {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
