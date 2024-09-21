#include <bits/stdc++.h>
using namespace std;
int N;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<int, vector<int>, greater<int>> pq;
    cin >> N;
    int x;
    while(N--){
        cin >> x;
        if(x) 
            pq.push(x);
        else{
            if(pq.empty()) 
                cout << 0 << '\n';
            else{
                cout << pq.top() << "\n"; 
                pq.pop();
            }
            
        }
    }
}