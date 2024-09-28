#include <bits/stdc++.h>
using namespace std;
int a,arr[10],t;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a;
       
    while(a){
        t = a % 10;
        arr[t]++;
        a /= 10;
    }
    int ans = 0;
    arr[6] = (arr[6] + arr[9] + 1) / 2;
    arr[9] = 0;
    cout << *max_element(arr,arr+10);
}