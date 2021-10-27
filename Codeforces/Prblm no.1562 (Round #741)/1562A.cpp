#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        if(2*l>r){
            cout<<r%l<<"\n";
        }
        else{
            cout<<(r+1)/2-1<<"\n";
        }
    }
    return 0;
}
