#include <bits/stdc++.h>
using namespace std;

int k;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> k;
    while(k--){
        unordered_map<string,int> gears;
        int n;
        cin >> n;
        while(n--){
            string gear;
            cin >> gear >> gear;
            gears[gear] += 1;
        }
        int ans = 1;
        for(auto it : gears) ans *= (it.second + 1);
        
        cout << ans - 1 << '\n';
    }
}