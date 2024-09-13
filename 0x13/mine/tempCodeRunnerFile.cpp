#include <bits/stdc++.h>
using namespace std;
int n,m,arr[1000005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr+n);
    int st = 0;
    int en = arr[n-1];
    while(st < en){
        int mid = (st+en)/2;
        int tree = 0;
        for (int i = 0; i < n; i++) {
            int left = arr[i] - mid;
            if(left > 0) tree += left;
        }
        if(tree == m){
            cout << mid;
            break;
        } 
        else if(tree > m) st = mid;
        else en = mid;
    }
    
}