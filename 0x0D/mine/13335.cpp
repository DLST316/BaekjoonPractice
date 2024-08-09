#include <bits/stdc++.h>
using namespace std;

int n,w,L,ans;
deque<int> trucks;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> w >> L;
    for (int i = 0; i < n; i++){
        int truck;
        cin >> truck;
        trucks.push_back(truck);
    }
    deque<int> onBridge(w, 0);
    while (true){
        int firstTruck = 0;
        if(!trucks.empty()) firstTruck = trucks.front();
        
        int bridgeSum = 0;
        if(!onBridge.empty())
            bridgeSum = accumulate(onBridge.begin() + 1,onBridge.end(),0); // 다리위 맨 앞 빼고 새로 들어온 트럭까지
        
        if((bridgeSum + firstTruck) <= L){ // 버틸수 있으면
            if(!trucks.empty()) trucks.pop_front();
            if(!onBridge.empty()){
                onBridge.pop_front();
            }
            onBridge.push_back(firstTruck);
        }else{ 
            if(!onBridge.empty()){
                onBridge.pop_front();
            }
            onBridge.push_back(0);
        }
        ans++;
        int onBridgeWeight = accumulate(onBridge.begin(),onBridge.end(),0);
        if( onBridgeWeight == 0 && trucks.empty()) break;
    }
    
    cout << ans;
}