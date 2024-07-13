#include <bits/stdc++.h>
using namespace std;

int arr[200002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sis,su;
    cin >> su >> sis;
    fill(arr, arr + 200000, -1);
    deque<int> dq;
    dq.push_back(su);
    arr[su] = 0;
    while (!dq.empty()){
        int cur = dq.front(); dq.pop_front();
        int nxt2 = 2 * cur;
        if(nxt2 < 200000 && arr[nxt2] == -1){
            arr[nxt2] = arr[cur];
            dq.push_front(nxt2);
        }
        for(auto nxt : {cur-1,cur+1}){
            if(nxt < 0 || nxt >= 200000 or arr[nxt] != -1) continue;
            arr[nxt] = arr[cur] + 1;
            dq.push_back(nxt);
        }
    }

    cout << arr[sis];
    
}
