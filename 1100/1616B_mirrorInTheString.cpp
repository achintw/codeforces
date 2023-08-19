#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    
    int n;
    cin >> n;
    string s;
    cin >> s;
    string sn = "";
    sn += s[0];
    bool ok = false;
    
    for(int i=0; i<n; i++){
        if(i==0) continue;
        if(s[i]<s[i-1]){
            sn += s[i];
            ok = true;
        } else if(s[i]==s[i-1]){
            if(ok) sn += s[i];
            else break;
        } else {
            break;
        }
    }
    
    cout << sn;
    reverse(sn.begin(), sn.end());
    cout << sn << endl;
    
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