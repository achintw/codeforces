#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s,k;
    cin >> s;
    unordered_set<char> st = {'a','A','e','E','i','I','o','O','u','U','y','Y'};
    
    for(int i=0; i<s.size(); i++){
        if(st.count(s[i])) continue;
        else {
            k += '.';
            k += (char)tolower(s[i]);
        }
    }
    
    cout << k;
    return 0;
}