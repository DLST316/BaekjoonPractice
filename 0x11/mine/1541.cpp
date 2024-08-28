#include <bits/stdc++.h>
using namespace std;

string s,tmp;
int ans;
int sign = 1;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;
    for(auto c : s){
        if(c == '-' || c == '+'){
            ans += stoi(tmp) * sign;
            if(c == '-') sign = -1;
            tmp.clear();
        }else{
            tmp.push_back(c);
        }
        
    }
    ans += stoi(tmp) * sign;
    cout << ans;
}