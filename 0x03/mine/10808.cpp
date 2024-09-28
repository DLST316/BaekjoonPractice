#include <bits/stdc++.h>
using namespace std;
int arr[26];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    for(auto c : s){
        arr[c-'a']++;
    }
    
    for(auto n : arr) cout << n << ' ';
}