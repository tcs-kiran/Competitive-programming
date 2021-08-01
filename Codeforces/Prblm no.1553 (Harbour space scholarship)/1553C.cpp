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
        int i,j,max1=0,max2=0,min1=0,min2=0;
        for (j=1;j<=10;j++) {
            if (j%2) {
                if (s[j-1]=='1') {
                    max1++;
                    min1++;
                }
                if (s[j-1]=='?') {
                    max1++;
                }
            }
            else {
                if (s[j-1]=='1') {
                    max2++;
                    min2++;
                }
                if (s[j-1]=='?') {
                    max2++;
                }
            }
            if (j==6) {
                if (max2-min1>=3 || max1-min2>=3) {
                    break;
                }
            }
            if (j==7) {
                if (max2-min1>=2 || max1-min2>=3) {
                    break;
                }
            }
            if (j==8) {
                if (max2-min1>=2 || max1-min2>=2) {
                    break;
                }
            }
            if (j==9) {
                if (max2-min1>=1 || max1-min2>=2) {
                    break;
                }
            }
            if (j==10) {
                break;
            }
        }
        cout << j << endl;
    }
    return 0;
}
