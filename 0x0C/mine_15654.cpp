#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[10];
int inputArray[10];
bool isused[10];

void func(int k){
    if(k == m){
        for(int i = 0; i < m; i++) cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++) {
        if(!isused[i]){
            arr[k] = inputArray[i-1];
            isused[i] = true;
            func(k+1);
            isused[i] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> inputArray[i]; 
    sort(inputArray,inputArray + n);
    func(0);
}