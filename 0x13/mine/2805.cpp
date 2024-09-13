#include <bits/stdc++.h>
using namespace std;
int n,m,arr[1000005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> arr[i];
    int st = 0;
    int en = *max_element(arr, arr + n);
    int result = 0;
    
    while (st <= en) {
        int mid = st + (en - st) / 2;
        long long tree = 0;
        
        for (int i = 0; i < n; i++) 
            if (arr[i] > mid) tree += arr[i] - mid;
        
        if (tree >= m) {
            result = mid;
            st = mid + 1;
        } else {
            en = mid - 1;
        }
    }
    
    cout << result;
    return 0;
    
}