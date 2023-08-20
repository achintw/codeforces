#include<bits/stdc++.h>
using namespace std;

bool isLucky(int k){
    while(k){
        if(k%10!=4 && k%10!=7){
            return false;
        }
        k = k/10;
    }
    
    return true;
}

int main(){
    int n=47;
    // cin >> n;
    
    for(int i=1; i<=n; i++){
        if(isLucky(i)){
            if(n%i==0){
                cout << "YES";
                return 0;
            }
        }
    }
    
    cout << "NO";
    return 0;
}
