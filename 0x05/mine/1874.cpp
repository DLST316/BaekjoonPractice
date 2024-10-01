#include <bits/stdc++.h>
using namespace std;

stack<int> stk;
vector<char> ans;
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    int idx = 1;
    while(n--){
        int x;
        cin >> x;
        while(idx <= x){
            stk.push(idx++);
            ans.push_back('+');
        }
        if(x != stk.top()){
            cout << "NO"; 
            return 0;
        }
        stk.pop();
        ans.push_back('-');
    }
    for(auto el : ans) cout << el << '\n';
    
}