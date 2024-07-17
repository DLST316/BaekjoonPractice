#include <bits/stdc++.h>
using namespace std;

int func1(int a, int b, int m ){
    int val = 1;
    while (b--){
        val *= a;
    }
    return val % m;
}
int main(){
    cout << func1(6,200,5);
}