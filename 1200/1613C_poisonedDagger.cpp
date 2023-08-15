#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    
    ll n, h;
    cin >> n >> h;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    
    // poison power range is [1,h] -> BS
    // see kis ke liye mar jayega sabse pehle
    
    ll l=1, r=h;
    ll ans;
    while(l<=r){
        
        ll mid = (l+r)/2;
        ll power = 0;
        
        for(ll i=0; i<n; i++){
            ll curr = mid;
            if(i < n-1){
                ll d = a[i+1]-a[i];
                if(d < mid) curr = d;
            }
            power += curr;
        }
        
        if(power >= h){
            ans = mid;
            r = mid-1;
        } else l = mid+1;
    }
    
    cout << ans << endl;
    
    // always remember to put endl after a test case
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}