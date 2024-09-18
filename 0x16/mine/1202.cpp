#include <bits/stdc++.h>
using namespace std;

int n,k;
pair<int,int> jewel[300005]; //가격 무게
multiset<int> bags;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;

    for (int i = 0; i < n; i++) 
        cin >> jewel[i].second >> jewel[i].first;
    sort(jewel,jewel+n);

    for (int i = 0; i < k; i++) {
        int c;
        cin >> c;
        bags.insert(c);
    }

    int64_t ans = 0;
    for (int i = n-1; i >= 0; i--) {
        auto it = bags.lower_bound(jewel[i].second);
        if(it == bags.end()) continue;
        ans += jewel[i].first;
        bags.erase(it);
    }
    cout << ans;
}