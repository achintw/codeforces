#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
     ll n;
        cin >> n;
        ll arr[n];
        set<ll> s;   // can also use deque (preferred)
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }
        ll l = 0, r = n - 1;
        while (r - l > 1)
        {
            ll mn = *s.begin(), mx = *s.rbegin();
            if (arr[l] != mn && arr[l] != mx && arr[r] != mn && arr[r] != mx)
            {
                break;
            }
            if (arr[l] == mn || arr[l] == mx)
            {
                l++;
                s.erase(arr[l - 1]);
            }
            if (arr[r] == mn || arr[r] == mx)
            {
                r--;
                s.erase(arr[r + 1]);
            }
        }
        if (r - l > 1)
        {
            cout << l + 1 << ' ' << r + 1 << '\n';
        }
        else
        {
            cout << "-1\n";
        }
        
}

int main(){
    int t; 
    cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}
