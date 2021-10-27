#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        cout << (a+c)%2 << endl;
    }
    return 0;
}
