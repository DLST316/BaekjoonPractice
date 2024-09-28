#include <bits/stdc++.h>
using namespace std;

int arr[9];

int main(){
    int mx = -1;
    int idx = -1;
    for (int i = 0; i < 9; i++){
        cin >> arr[i];
        if(mx < arr[i]){
            mx = arr[i];
            idx = i;
        }
    }

    cout << mx << '\n' << idx + 1;  
    
}