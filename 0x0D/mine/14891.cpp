#include <bits/stdc++.h>
using namespace std;

string gears[4];
int ans;
void func(int index, int rotation){
    int rotations[4] = {};
    rotations[index] = rotation;

    int idx = index;
    while (idx > 0 && gears[idx][6] != gears[idx-1][2]){
        rotations[idx-1] = -rotations[idx];
        idx--;
    }

    idx = index;
    while (idx < 3 && gears[idx][2] != gears[idx+1][6]){
        rotations[idx+1] = -rotations[idx];
        idx++;
    }

    for (int i = 0; i < 4; i++) {
        if(rotations[i] == -1)
            rotate(gears[i].begin(),gears[i].begin()+1,gears[i].end());
        else if(rotations[i] == 1)
            rotate(gears[i].begin(),gears[i].begin()+7,gears[i].end());
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 4; i++) cin >> gears[i];
    int n;
    cin >> n;
    while (n--){
        int gearIdx, rotation;
        cin >> gearIdx >>  rotation;
        gearIdx--;//1번 톱니 바퀴는 0번 인덱
        func(gearIdx,rotation);
    }
    for (int i = 0; i < 4; i++) 
        if(gears[i][0] == '1') ans += (1 << i);
    
    cout << ans;
}


// 오른쪽은 2번 인덱스 값 왼쪽은 6번 인덱스 값