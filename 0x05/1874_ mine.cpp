#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int input,n,cnt = 1;
    stack<int> my_stack;
    string ans;
    cin >> n;
    for (size_t i = 0; i < n; i++){
        cin >> input;
        for (size_t j = 0; j < input; j++){
            ans += "+\n";
            my_stack.push(cnt++);
        }
        if(my_stack.top() != input){
            cout << "NO\n";
            return 0;
        }
        
        my_stack.pop();
        ans += "-\n";
    }
    cout << ans;
}