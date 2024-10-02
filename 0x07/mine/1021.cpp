#include <bits/stdc++.h>
using namespace std;

int n, m, cnt;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    deque<int> dq;
    for (int i = 0; i < n; i++) dq.push_back(i+1);
    while(m--){
        int t;
        cin >> t;
        int idx = find(dq.begin(),dq.end(),t) - dq.begin();
        while(dq.front() != t){
            if(idx <= dq.size()/2){
                dq.push_back(dq.front());
                dq.pop_front();
            }else{
                dq.push_front(dq.back());
                dq.pop_back();
            }
            cnt++;
        }
        dq.pop_front();
    }
    cout << cnt;
}