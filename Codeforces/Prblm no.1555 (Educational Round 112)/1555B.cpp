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
        ll W,H,x1,x2,y1,y2,w,h,x,y;
        cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w >> h;
        if (W-(x2-x1)<w && H-(y2-y1)<h) {
            cout << "-1\n";
            continue;
        }
        // cout << x1 << " " << W-x2 << " " << y1 << " " << H-y2 << endl;
        if (x1>=w || W-x2>=w || y1>=h || H-y2>=h) {
            cout << "0\n";
            continue;
        }
        x=max(x1,W-x2);
        y=max(y1,H-y2);
        if (w+(x2-x1)>W) {
            cout << h-y << endl;
            continue;
        }
        if (h+(y2-y1)>H) {
            cout << w-x << endl;
            continue;
        }
        cout << min(w-x,h-y) << endl;
    }
    return 0;
}
