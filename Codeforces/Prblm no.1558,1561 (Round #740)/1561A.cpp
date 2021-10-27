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
        ll i,j,k,n;
        cin >> n;
        vector<ll> vec(n),vec1;
        for (i=0;i<n;i++) {
            cin >> vec[i];
        }
        vec1=vec;
        sort(vec1.begin(),vec1.end());
        j=1;
        if (vec1==vec) {
            cout << "0\n";
            continue;
        }
        // checking when the vector is sorted
        while (1) {
            if (j%2==1) {
                for (k=1;k<n-1;k+=2) {
                    if (vec[k-1]>vec[k]) {
                        swap(vec[k-1],vec[k]);
                    }
                }
            }
            else {
                for (k=2;k<n;k+=2) {
                    if (vec[k-1]>vec[k]) {
                        swap(vec[k-1],vec[k]);
                    }
                }
            }
            if (vec==vec1) {
                break;
            }
            j++;
        }
        cout << j << endl;
    }
    return 0;
}
