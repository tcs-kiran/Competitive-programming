#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

struct Rank {
    int r[5];
};

bool operator < (const Rank& A, const Rank& B) {
    int count=0;
    for (int i=0;i<5;i++) {
        if (A.r[i]<B.r[i]) {
            count++;
        }
    }
    return (count>2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int i,j,k,n,w,a,b;
        cin >> n;
        vector<Rank> vec(n);
        for (i=0;i<n;i++) {
            for (j=0;j<5;j++) {
                cin >> vec[i].r[j];
            }
        }
        w=0;
        for (i=1;i<n;i++) {
            if (vec[i]<vec[w]) {
                w=i;
            }
        }
        for (i=0;i<n;i++) {
            if (i==w) {
                continue;
            }
            if (vec[i]<vec[w]) {
                cout << "-1\n";
                break;
            }
        }
        if (i==n) {
            cout << w+1 << endl;
        }
    }
    return 0;
}
