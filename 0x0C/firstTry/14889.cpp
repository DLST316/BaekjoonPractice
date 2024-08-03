#include <bits/stdc++.h>
using namespace std;

int n;
int board[25][25];
int brute[25];
vector<int> team1idx,team2idx;
int mn = INT32_MAX;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            cin >> board[i][j];
    
    fill(brute + n/2 ,brute + n, 1);
    
    do{
        int team1 = 0,team2 = 0;
        team1idx.clear();
        team2idx.clear();
        for (int i = 0; i < n; i++) {
            if(brute[i] == 0) {
                team1idx.push_back(i);
            } else {
                team2idx.push_back(i);
            }
        }

        
        for (int i = 0; i < team1idx.size(); i++) {
            for (int j = i + 1; j < team1idx.size(); j++) {
                if (i != j) {
                    int player1 = team1idx[i];
                    int player2 = team1idx[j];
                    team1 += board[player1][player2];
                    team1 += board[player2][player1];
                }
            }
        }
        for (int i = 0; i < team2idx.size(); i++) {
            for (int j = i + 1; j < team2idx.size(); j++) {
                if (i != j) {
                    int player1 = team2idx[i];
                    int player2 = team2idx[j];
                    team2 += board[player1][player2];
                    team2 += board[player2][player1];
                }
            }
        }
        mn = min(mn, abs(team1 - team2));
        

    } while (next_permutation(brute, brute + n));
    cout << mn;
}