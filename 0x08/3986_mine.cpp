#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt;
    string input;
    cin >> cnt;
    cnt = 0;
    while(cin >> input){
        stack<char> my_stack;
        for(auto c : input){
            if(!my_stack.empty() && my_stack.top() == c)    my_stack.pop();
            else                                            my_stack.push(c);
        }
        if(my_stack.empty()) cnt++;
    }

    cout << cnt;
}