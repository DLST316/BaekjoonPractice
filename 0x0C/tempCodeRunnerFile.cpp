#include <bits/stdc++.h>
using namespace std;

int n;
int arr[14];

bool isAscending(int arr[], int length) {
    for (int i = 1; i < length; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    while (true){
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        do {
            if (isAscending(arr, 6)) {
                for (int i = 0; i < 6; i++) {
                    cout << arr[i] << ' ';
                }
                cout << '\n';
            }
        } while (next_permutation(arr, arr + n));
        cout << '\n';
        cin >> n;
        if (!n) break;; 
    }
}