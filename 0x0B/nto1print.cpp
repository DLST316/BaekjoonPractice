#include <bits/stdc++.h>
using namespace std;

void PrintNTo1(int n){
    cout << n << '\n';
    if(n != 1)  PrintNTo1(n-1);
}

int main(){
    int n;
    cin >> n;
    PrintNTo1(n);
}