#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j,k,n,m,l,r;
    string s;
    cin >> n >> m >> s;
    // There are only 6 possible combinations
    // abcabcabc....
    // acbacbacb....
    // bacbacbac....
    // bcabcabca....
    // cabcabcab....
    // cbacbacba....
    // Finding the values for each of the possible strings
    vector<vector<ll>> vec(6,vector<ll>(n+1,0));
    for (i=0;i<n;i++) {
        vec[0][i+1]=vec[0][i];
        vec[1][i+1]=vec[1][i];
        vec[2][i+1]=vec[2][i];
        vec[3][i+1]=vec[3][i];
        vec[4][i+1]=vec[4][i];
        vec[5][i+1]=vec[5][i];
        switch (i%3) {
            case 0: {
                switch (s[i]) {
                    case 'a': {
                        vec[2][i+1]+=1;
                        vec[3][i+1]+=1;
                        vec[4][i+1]+=1;
                        vec[5][i+1]+=1;
                        break;
                    }
                    case 'b': {
                        vec[0][i+1]+=1;
                        vec[1][i+1]+=1;
                        vec[4][i+1]+=1;
                        vec[5][i+1]+=1;
                        break;
                    }
                    case 'c': {
                        vec[0][i+1]+=1;
                        vec[1][i+1]+=1;
                        vec[2][i+1]+=1;
                        vec[3][i+1]+=1;
                        break;
                    }
                }
                break;
            }
            case 1: {
                switch (s[i]) {
                    case 'a': {
                        vec[0][i+1]+=1;
                        vec[1][i+1]+=1;
                        vec[3][i+1]+=1;
                        vec[5][i+1]+=1;
                        break;
                    }
                    case 'b': {
                        vec[1][i+1]+=1;
                        vec[2][i+1]+=1;
                        vec[3][i+1]+=1;
                        vec[4][i+1]+=1;
                        break;
                    }
                    case 'c': {
                        vec[0][i+1]+=1;
                        vec[2][i+1]+=1;
                        vec[4][i+1]+=1;
                        vec[5][i+1]+=1;
                        break;
                    }
                }
                break;
            }
            case 2: {
                switch (s[i]) {
                    case 'a': {
                        vec[0][i+1]+=1;
                        vec[1][i+1]+=1;
                        vec[2][i+1]+=1;
                        vec[4][i+1]+=1;
                        break;
                    }
                    case 'b': {
                        vec[0][i+1]+=1;
                        vec[2][i+1]+=1;
                        vec[3][i+1]+=1;
                        vec[5][i+1]+=1;
                        break;
                    }
                    case 'c': {
                        vec[1][i+1]+=1;
                        vec[3][i+1]+=1;
                        vec[4][i+1]+=1;
                        vec[5][i+1]+=1;
                        break;
                    }
                }
            }
        }
    }
    for (i=0;i<m;i++) {
        cin >> l >> r;
        k=n;
        for (j=0;j<6;j++) {
            k=min(k,vec[j][r]-vec[j][l-1]);
        }
        cout << k << endl;
    }
    return 0;
}
