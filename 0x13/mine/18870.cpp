#include <bits/stdc++.h>
using namespace std;
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    vector<int> uni(n);
    for (int i = 0; i < n; i++) cin >> uni[i];
    vector<int> input = uni;
    sort(uni.begin(),uni.end());
    uni.erase(unique(uni.begin(), uni.end()), uni.end());
    for (int i = 0; i < n; i++)
        cout << lower_bound(uni.begin(),uni.end(),input[i]) - uni.begin() << '\n';
        
    
}