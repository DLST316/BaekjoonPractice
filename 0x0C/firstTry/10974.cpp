#include <bits/stdc++.h>
using namespace std;
int n;
bool isused[10];
int arr[10];

void func(int k){
    if(n == k){
        for(int i = 0; i < n; i++) cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; i++) {
        if(!isused[i+1]){
            arr[k] = i + 1;
            isused[i + 1] = 1;
            func(k+1);
            isused[i + 1] = 0;
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    func(0);
}