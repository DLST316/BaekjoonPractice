#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int input_value,n;
    cin >> n;
    vector<int> towers;
    vector<int> result(n);
    stack<int> index;
    
    while(cin >> input_value) towers.push_back(input_value);
    for (size_t i = 0; i < n; i++){    
        while (!index.empty() && towers[index.top()] <= towers[i]) index.pop();
        if (index.empty())  result[i] = 0; 
        else result[i] = index.top() + 1; 
        index.push(i); 
    }
    for(auto it : result) cout << it << " ";
    
}