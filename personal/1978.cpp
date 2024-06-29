#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, cnt = 0;
    cin >> n;
    vector<bool> isPrime(1001, true); 
    isPrime[0] = isPrime[1] = false; 

    for (int i = 2; i <= sqrt(1000); ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= 1000; j += i) {
                isPrime[j] = false;
            }
        }
    }

    while(cin >> n) if(isPrime[n]) cnt++;
      
    cout << cnt;
}