#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    
    int a,b,c;
    cin >> a >> b >> c;
    int s = a+b+c;
    int EnShots = (a+b+c)/9;

    /*
        min death shots = 7 (1 Enhanced shot) => damage dealth = 9
        so for every EnShot, damage dealth is 9 => #EnShots = (a+b+c)/9
        (s%9 == 0) means the monsters can be beautifully killed, but now
        check if all live to die beautifully or get killed before the EnShot
        (a >= #EnShot && b >= #EnShot && c >= #EnShot)
        
    */
    
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
