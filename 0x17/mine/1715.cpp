#include <bits/stdc++.h>
using namespace std;

int N,tmp,sum;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<int, vector<int>, greater<int>> s;
    cin >> N;
    int x;
    for (int i = 0; i < N; i++) {
        cin >> x;
        s.push(x);
    }
    
    while(s.size() > 1) {
        int a = s.top(); s.pop();
        int b = s.top(); s.pop();
        sum += a + b;
        s.push(a+b);
    }
    

    cout << sum;
}