#include <bits/stdc++.h>
using namespace std;
bool arr[2000005];
int n,t,x;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while(n--){
        cin >> t;
        arr[t] = true;
    }
    cin >> x;
    int ans = 0;
    for(int i = 1; i <= x/2; i++){
        if((i != x-i) &&(arr[i] && arr[x-i])){
            ans++;
        }
    }
    cout << ans;
}