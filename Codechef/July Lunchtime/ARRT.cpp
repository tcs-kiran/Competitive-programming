// If Ai,Ci is fixed then there are only 2 possible values of Bi(1<=Bi<=2*N)

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
        ll i,j,k,n,least,temp,loc1,loc2;
        cin >> n;
        vector<ll> a(n),b(n);
        for (i=0;i<n;i++) {
            cin >> a[i];
        }
        for (i=0;i<n;i++) {
            cin >> b[i];
        }
        for (least=0;least<n;least++) {
            temp=least+(n-(a[0]%n));
            // loc1 is the position of 1st possible location 
            loc1=find(b.begin(),b.end(),temp)-b.begin();
            // loc2 is the poaition of 2nd possible location
            loc2=find(b.begin(),b.end(),n+temp)-b.begin();
            if (loc1!=n || loc2!=n) {
                break;
            }
        }
        if (loc1!=n && loc2==n) {
            for (i=0;i<n;i++) {
                cout << (a[i]+b[(loc1+i)%n])%n << " ";
            }
            cout << endl;
            continue;
        }
        if (loc1==n && loc2!=n) {
            for (i=0;i<n;i++) {
                cout << (a[i]+b[(loc2+i)%n])%n << " ";
            }
            cout << endl;
            continue;
        }
        // Checking which one is smaller at i
        for (i=0;i<n;i++) {
            if ((a[i]+b[(loc1+i)%n])%n<(a[i]+b[(loc2+i)%n])%n) {
                k=loc1;
                break;
            }
            if ((a[i]+b[(loc1+i)%n])%n>(a[i]+b[(loc2+i)%n])%n) {
                k=loc2;
                break;
            }
        }
        for (i=0;i<n;i++) {
            cout << (a[i]+b[(k+i)%n])%n << " ";
        }
        cout << endl;
    }
    return 0;
}
