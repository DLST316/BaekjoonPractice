#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n, m;
int city[55][55];
vector<pair<int,int>> chicken;
vector<pair<int,int>> houses;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> city[i][j];
            if(city[i][j] == 2) chicken.push_back({i,j});
            if(city[i][j] == 1) houses.push_back({i,j});
        }
    } 
    
    vector<int> brute(chicken.size(), 1);
    fill(brute.begin(), brute.begin() + chicken.size() - m, 0);
    int answer = INT32_MAX;
    do{// 가능한 조합안에
        int dist = 0;
        for(auto h : houses){ // 모든 집에 대해서
            int tmp = INT32_MAX;
            for (int i = 0; i < chicken.size(); i++) {
                if(brute[i] == 0) continue; // 1인 것만 선택해서 조합
                tmp = min(tmp, abs(chicken[i].X - h.X) + abs(chicken[i].Y - h.Y)); //특정 조합중 m개의 치킨집 중 가장 작은 거리 선택
            }
            dist += tmp;// 조합안에서 특정집의 가장가까운 치킨집 저장
        }
        answer = min(answer,dist);
    } while (next_permutation(brute.begin(),brute.end()));
    cout << answer;
    
}