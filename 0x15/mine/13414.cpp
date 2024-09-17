#include <bits/stdc++.h>
using namespace std;

unordered_map<string,int> mp;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k,l;
    cin >> k >> l;
    for (int i = 0; i < l; i++) {
        string student;
        cin >> student;
        if(mp.find(student) != mp.end()){
            mp.erase(student);
            mp[student] = i;
        }else{
            mp[student] = i;
        }
    }
    vector<pair<string,int>> vec(mp.begin(),mp.end());
    sort(vec.begin(),vec.end(),[](auto& a, auto& b) { return a.second < b.second;});
    
    int en = min(k, (int)vec.size());
    for(int i = 0; i < en; i++)
        cout << vec[i].first << '\n';
    
    
    
}