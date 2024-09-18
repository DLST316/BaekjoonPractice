#include <bits/stdc++.h>
using namespace std;

string teams[105];
set<string> team_member_set[105];
unordered_map<string,int> mem2team;
unordered_map<string,int> team2i;
int n, m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> teams[i];
        int num_of_members;
        cin >> num_of_members;
        for (int j = 0; j < num_of_members; j++) {
            string member;
            cin >> member;
            team_member_set[i].insert(member);
            mem2team[member] = i;
            team2i[teams[i]] = i;
        }
    }

    for (int i = 0; i < m; i++) {
        string input;
        int op;
        cin >> input >> op;
        if(op){
            cout << teams[mem2team[input]] << '\n';
        }else{
            for(auto it : team_member_set[team2i[input]]){
                cout << it << '\n';
            }
        }
    }
}
