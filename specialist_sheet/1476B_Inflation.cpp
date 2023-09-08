#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll l = 0, r = 1e14, ans = 0; // Initialize ans
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        ll sum = a[0] + mid;
        bool ok = true;
        for (int i = 1; i < n; i++) {
            ll x = sum * k / 100;
            if (a[i] > x) {
                ok = false;
                break;
            }
            sum += a[i];
        }
        if (ok) {
            ans = mid; // Update ans when ok is true
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << "\n"; // Output ans
}

    
    // always remember to put endl after a test case



int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}