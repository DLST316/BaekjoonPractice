#include <bits/stdc++.h>
using namespace std;

int DP[100005];
int n, input;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    
    cin >> input;
    DP[0] = input;
    for (int i = 1; i < n; i++) {
        cin >> input;
        DP[i] = max(input,DP[i-1]+input);
    }
    cout << *max_element(DP, DP+n);
}