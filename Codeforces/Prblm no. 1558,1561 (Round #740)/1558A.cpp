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
        ll a,b,i,j,k,n;
        cin >> a >> b;
        n=a+b;
        vector<ll> vec;
        // x=abs(a-b)/2
        // If a+b=odd => k=x,x+1,x+2,....,a+b-x
        // If a+b=even=> k=x,x+2,x+4,....,a+b-x
        if (n%2==1) {
            k=abs(b-a);
            cout << n+2-k << endl;
            for (i=k/2;i<=n-(k/2);i++) {
                cout << i << " ";
            }
            cout << endl;
        }
        else {
            k=abs(b-a);
            cout << (n/2)+1-(k/2) << endl;
            for (i=k/2;i<=n-(k/2);i+=2) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
