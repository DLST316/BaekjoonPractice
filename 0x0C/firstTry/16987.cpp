#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

vector<pair<int,int>> eggs;
vector<int> answers;
bool isused[10];
bool isbroken[10];
int n, answer = -1;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++) {
        int s,w;
        cin >> s >> w;
        eggs.push_back({s,w});
    }
    
    
    
}