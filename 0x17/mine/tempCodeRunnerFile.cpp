#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<int> pq;
    int n;
    cin >> n;
    int square = n*n;
    int x;
    while (square--){
        cin >> x;
        pq.push(x);
    }
    n--;
    while(n--) pq.pop();
    cout << pq.top();
    
}