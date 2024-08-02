#include <bits/stdc++.h>
using namespace std;

int n, arr[14], mask[14];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true){
        cin >> n;
        if(!n) break;

        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = 6; i < n; i++) mask[i] = 1;
        do
        {
            for (int i = 0; i < n; i++) if(!mask[i]) cout << arr[i] << " ";
            cout << '\n';
            
        } while (next_permutation(mask, mask + n));
        cout << '\n';
    }
    
}