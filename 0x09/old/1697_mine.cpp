#include<bits/stdc++.h>
using namespace std;
int dist[100002];
int subin, sister;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> subin >> sister;
    fill(dist, dist + 100001, -1);
    dist[subin] = 0;
    queue<int> my_queue;
    my_queue.push(subin);
    while(dist[sister] == -1){
        auto cur = my_queue.front(); my_queue.pop();
        for(int nxt : {cur + 1, cur - 1, cur * 2}){
            if(nxt < 0 || nxt > 100000) continue;
            if(dist[nxt] >= 0) continue;
            dist[nxt] = dist[cur] + 1;
            my_queue.push(nxt);
        }
    }
    cout << dist[sister];
}