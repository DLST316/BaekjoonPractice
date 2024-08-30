#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> divisors;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i*i <= n; i++) {
        if(n % i == 0){
            divisors.push_back(i);
        }
    }
    for (int i = divisors.size()-1; i >= 0; i--) {
        if(divisors[i] * divisors[i] == n) continue;
        divisors.push_back(n / divisors[i]);
    }
    for(auto div : divisors){
        cout << div << '\n';
    }
    
}