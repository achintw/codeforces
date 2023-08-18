#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    
    int n;
    int c;
    cin >> n;
    vector<ll> a(n+1);
    
    for(int i=1; i<n+1; i++) cin >> a[i];
    
    int ans = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=a[i]-i; j<=n; j+=a[i])
        {
            if(j>=0 && a[i]*a[j]==i+j && i<j)
                ans++;
        }
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