#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int length;
    int n, cnt = 0;
    cin >> length;
    deque<int> D;
    cin >> n;

    for (size_t i = 1; i <=length; i++) D.push_back(i);
    
    while(cin >> n){
        auto it = find(D.begin(), D.end(), n);
        int index = distance(D.begin(), it);
        int distance_to_back = D.size() - 1 - index;
        if(index <= distance_to_back){
            int front;
            while(true){
                if(n != D.front()){
                    front = D.front();
                    D.pop_front();
                    D.push_back(front);
                    cnt++;
                }else break;
            }
            D.pop_front();

        }else{
            int back;
            while(true){
                if(n != D.front()){
                    back = D.back();
                    D.pop_back();
                    D.push_front(back);
                    cnt++;
                }else break;
            }
            D.pop_front();

        }
    }
    cout << cnt;
}