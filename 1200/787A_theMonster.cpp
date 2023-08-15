#include <bits/stdc++.h>
#define ll long long
#define mii map<ll, ll>
using namespace std;
 
int main(){
    ll a,b,c,d;
    mii mp;
    // mii upar defined hai
    
    cin >> a >> b >> c >> d;
    
    for(int i=0; i<=100; i++){
        mp[b+a*i] += 1;
    }
    
    for(int i=0; i<=100; i++){
        if(mp[d+c*i]){
            cout << d+c*i << endl;
            return 0;
        }
        // mp[d+c*i] += 1;
    }
    
    cout << -1 << endl;
    
    return 0;
    
}