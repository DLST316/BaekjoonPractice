#include <bits/stdc++.h>
using namespace std;
long long arr[1000005];
string arr2[1000005];
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr2[i] = to_string(arr[i]);
        reverse(arr2[i].begin(),arr2[i].end());
        arr[i] = stoll(arr2[i]);
    }
    sort(arr,arr + n);
    for (int i = 0; i < n; i++) 
        cout << arr[i] << '\n';
    
}