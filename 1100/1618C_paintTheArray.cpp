#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    /*
        to paint the array alternatively we need
        to find a number 'd' which divides all of (a1,a3,a5,...)
        but not (a2,a4,a6,...) or vice-versa, we find a 'd' which 
        divides the gcd(a1,a3,a5,...) and check if it divides (a2,a4,a6...)
    */
    
    ll d1=0,d2=0;
    for(int i=0; i<n; i++){
        if(i%2 == 0){
            d1 = __gcd(d1,a[i]);
        } else {
            d2 = __gcd(d2,a[i]);
        }
    }
  
    bool ok = true;
    for(int i=0;i<n;i+=2){
        if(a[i]%d2==0){
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<d2<<"\n";
        return;
    }
    
    ok = true;
    for(int i=1;i<n;i+=2){
        if(a[i]%d1==0){
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<d1<<"\n";
        return;
    }
    
    cout<<0<<"\n";
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
