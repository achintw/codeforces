#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, a, count = 0;
    cin >> n;
    map<int, int> m;
    
    for(ll i=0; i<n; i++){
        cin >> a;
        if(m[a-i]){
            count += m[a-i];
        }
        m[a-i]++;
    }
    cout << count << endl;
}

int main(){
    // cin.tie(0);
    // cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}