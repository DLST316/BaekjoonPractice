#include <bits/stdc++.h>
using namespace std;
vector<int64_t> anss;
int T,N;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    while (T--){
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) 
            cin >> arr[i];
        
        int64_t ans = 0;
        int mx = arr[N-1];
        for (int i = N-2; i >= 0; i--) {
            if(arr[i] > mx) mx = arr[i];
            ans += mx - arr[i];
        }
        anss.push_back(ans);
    }
    for(auto ans : anss) cout << ans << '\n';
    
}