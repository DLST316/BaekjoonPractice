#include <bits/stdc++.h>
using namespace std;
int n,s,cnt;
int arr[20];

void func(int sum, int i){
    if(i == n){
        if(sum == s) cnt++;
        return;
    }
    func(sum,i+1);
    func(sum + arr[i],i+1);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> s;
    for (int i = 0; i < n; i++) cin >> arr[i];
    func(0,0);
    if(s == 0) cnt--;
    cout << cnt;
}
