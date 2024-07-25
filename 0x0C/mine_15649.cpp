#include<bits/stdc++.h>
using namespace std;

int arr[9];
int isused[9];
int n, m;
void func(int k){
    if(k == m){
        for(int i = 0; i < m; i++){
            cout << arr[i] <<' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++) {
        if(!isused[i+1]){
            arr[k] = i + 1;
            isused[i+1] = 1;
            func(k+1);
            isused[i+1] = 0;
        }
    }
}

int main(){
    cin >> n >> m;
    func(0);
}