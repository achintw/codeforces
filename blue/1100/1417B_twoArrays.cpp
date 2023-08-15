#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    
    int n, T;
    cin >> n >> T;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    
    map<ll, ll> c;
    map<ll, ll> d;
    
    for(ll i=0; i<n; i++){
        ll el = a[i];
        if(c[T-el] <= d[T-el]){
            c[el]++;
        }
        else{
            d[el]++;
        }
    }
    
    ll ans[n] = {0};
    for(ll i=0; i<n; i++){
        ll el = a[i];
        if(c[el]){
            ans[i] = 0;
            c[el]--;
        } else {
            ans[i] = 1;
            d[el]--;
        }
    }
    
    // printing
    for(ll i=0; i<n; i++){
        cout << ans[i] << " ";
    } cout << endl;  // neccessary
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
