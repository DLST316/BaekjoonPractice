#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> freq;
int n,c;

bool cmp(const pair<int,int> p1, const pair<int,int> p2){
    return p1.second > p2.second; 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        bool is_contained = false;
        for(auto &it : freq){//돌면서 이미 있으면 빈도 증가
            if(it.first == tmp){
                is_contained = true;
                it.second++;
                break;
            }
        }
        if(!is_contained){ // 없으면 새로 추가
            freq.push_back({tmp,1});
        }
    } 

    stable_sort(freq.begin(),freq.end(),cmp);
    for(auto p : freq){
        while(p.second--){
            cout << p.first << " ";
        }
    }
}