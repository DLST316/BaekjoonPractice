#include <bits/stdc++.h>
using namespace std;

vector<int> primes;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 2; i*i <= n;) {
        if(n % i == 0){
            n /= i;
            primes.push_back(i);;
        }else{
            i++;
        }
    }
    for(auto prime : primes) cout << prime << '\n';
    if(n != 1) cout << n;
}