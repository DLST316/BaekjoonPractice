#include <iostream>
using namespace std;

int n, m, notEmpty;
int room[9][9];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> room[i][j];
            if (room[i][j]) {
                notEmpty++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (room[i][j] == 1) {
                for (int dir = 0; dir < 4; dir++) {
                    switch (dir) {
                        case 0://왼쪽으로 쭉
                            int curX = i;
                            int curY = j;
                            while (true){
                                curY--;
                                if(curX < 0 || curX >= n || curY < 0 || curY >= m) break;;
                                if(room[curX][curY] == 6) break;;
                                notEmpty++;
                            }
                            break;
                        case 1://위
                            int curX = i;
                            int curY = j;
                            while (true){
                                curX--;
                                if(curX < 0 || curX >= n || curY < 0 || curY >= m) break;;
                                if(room[curX][curY] == 6) break;;
                                notEmpty++;
                            }
                        
                            break;
                        case 2://오른
                            int curX = i;
                            int curY = j;
                            while (true){
                                curY++;
                                if(curX < 0 || curX >= n || curY < 0 || curY >= m) break;;
                                if(room[curX][curY] == 6) break;;
                                notEmpty++;
                            }
                        
                            break;
                        case 3://아래
                        int curX = i;
                            int curY = j;
                            while (true){
                                curX++;
                                if(curX < 0 || curX >= n || curY < 0 || curY >= m) break;;
                                if(room[curX][curY] == 6) break;;
                                notEmpty++;
                            }
                        
                        break;
                        default:
                            break;
                    }
                }
            }else if(room[i][j] == 2){

            }else if(room[i][j] == 3){

            }else if(room[i][j] == 4){

            }else if(room[i][j] == 5){

            }
        }
    }
    return 0;
}
