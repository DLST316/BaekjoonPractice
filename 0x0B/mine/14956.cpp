#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n,m;

pair<int,int> func(int side, int walk) {
    if(side == 2){
        if(walk == 1){
            return {1,1};
        }else if (walk == 2){
            return {1,2};
        }else if (walk == 3){
            return {2,2};
        }else{
            return {2,1};
        }
    }
    int half = side / 2;
    int quater = half * half;
    if(walk <= quater){
        pair<int,int> temp = func(half,walk);
        return {temp.Y, temp.X};
    }else if (walk <= 2 * quater){
        pair<int,int> temp = func(half,walk - quater);
        return {temp.X, half + temp.Y};
    }else if (walk <= 3 * quater){
        pair<int,int> temp = func(half,walk - 2 * quater);
        return {half + temp.X, half + temp.Y};
    }else{
        pair<int,int> temp = func(half,walk - 3 * quater);
        return {2 * half - temp.Y + 1, half - temp.X + 1};
    }


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    pair<int,int> ans = func(n,m);
    cout << ans.X << ' ' << ans.Y;
}