#include <bits/stdc++.h>
using namespace std;

int N, Q, place, op, curr = 1;
set<int> places;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> Q;
    for (int i = 0; i < N; i++) {
        cin >> place;
        if(place) places.insert(i+1);
    }
    while (Q--){
        cin >> op;
        switch (op){
            case 1:
                cin >> op;
                if(places.find(op) != places.end()) places.erase(op);
                else places.insert(op);
                break;
            case 2:
                cin >> op;
                curr = (curr + op - 1) % N + 1;
                break;
            case 3:
                if (places.empty()) cout << -1 << '\n';
                else {
                    auto it = places.lower_bound(curr);
                    if (it != places.end())
                        cout << *it - curr << '\n';
                    else
                        cout << N - curr + *places.begin() << '\n';
                }
        }
    }
}