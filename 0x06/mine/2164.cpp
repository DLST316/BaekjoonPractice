#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++) dq.push_back(i+1);
    while(dq.size() != 1){
        dq.pop_front();
        dq.push_back(dq.front());
        dq.pop_front();
    }
    cout << dq.front();
}