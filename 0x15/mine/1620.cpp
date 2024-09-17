#include <bits/stdc++.h>
using namespace std;

unordered_map<string,int> mp;
string arr[100005];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        string name;
        cin >> name;
        mp[name] = i;
        arr[i] = name;
    }
    while (m--){
        string input;
        cin >> input;
        if(isdigit(input[0])) cout << arr[stoi(input)] << '\n';
        else cout << mp[input] << '\n';
    }
    
}