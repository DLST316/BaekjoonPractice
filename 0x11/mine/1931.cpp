#include <bits/stdc++.h>
using namespace std;
#define X first 
#define Y second

pair<int,int> arr[100005];
int n, cnt, st;

bool cmp(const pair<int,int> &a, const pair<int,int> &b){
    if(a.Y != b.Y) return a.Y < b.Y;
    return a.X < b.X;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    int x,y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        arr[i] =  {x,y};
    }
    sort(arr,arr+n,cmp);
    
    for (int i = 0; i < n; i++) {
        if(arr[i].X >= st){
            st = arr[i].Y;
            cnt++;
        }
    }
    cout << cnt;
}