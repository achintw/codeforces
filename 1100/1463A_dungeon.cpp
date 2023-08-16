#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    
    int a,b,c;
    cin>>a>>b>>c;
    int s=a+b+c;
    int EnShots=(a+b+c)/9;
    
    if(s%9==0 && a>=EnShots && b>=EnShots && c>=EnShots){
        cout << "YES" << " ";
    } else {
        cout << "NO" <<" ";
    }
    
    cout << endl;
    
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