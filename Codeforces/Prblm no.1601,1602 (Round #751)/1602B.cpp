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
        ll i,j=0,n,q,x,k,count=0,high=0;
        cin >> n;
        vector<ll> vec(n),vec1(n);
        for (i=0;i<n;i++) {
            cin >> vec[i];
        }
        cin >> q;
        vector<tuple<ll,ll,ll>> v;
        vector<ll> ans(q,0);
        for (i=0;i<q;i++) {
            cin >> x >> k;
            v.push_back(make_tuple(k,x,i));
            if (k>high) {
                high=k;
            }
        }
        sort(v.begin(),v.end());
        map<ll,ll> m,m1;
        for (i=0;i<n;i++) {
            m[vec[i]]++;
        }
        while (get<0>(v[j])==count && j<q) {
            ans[get<2>(v[j])]=vec[get<1>(v[j])-1];
            j++;
        }
        count++;
        while (count<=high) {
            for (i=0;i<n;i++) {
                vec1[i]=m[vec[i]];
                m1[vec1[i]]++;
            }
            m=m1;
            if (vec==vec1) {
                break;
            }
            vec=vec1;
            while (get<0>(v[j])==count && j<q) {
                ans[get<2>(v[j])]=vec[get<1>(v[j])-1];
                j++;
            }
            m1.clear();
            count++;
        }
        while (j<q) {
            ans[get<2>(v[j])]=vec[get<1>(v[j])-1];
            j++;
        }
        for (i=0;i<q;i++) {
            cout << ans[i] << endl;
        }
    }
    return 0;
}
