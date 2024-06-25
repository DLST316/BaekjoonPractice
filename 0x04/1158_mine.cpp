#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    cin >> n >> k;

    list<int> my_list;
    
    for (size_t i = 0; i < n; i++) my_list.push_back(i+1);
    auto curr = my_list.begin();

    cout << "<";
    while(!my_list.empty()){
        
        for (size_t i = 0; i < k-1; i++)
        {
            curr++;
            if(curr == my_list.end()) curr++;
        }
        if(my_list.size() != 1) cout << *curr << ", ";
        else cout << *curr;
        curr = my_list.erase(curr);
        if(curr == my_list.end()) curr++;
    }
    cout << ">";
}