#include<bits/stdc++.h>
using namespace std;

deque<int> ChangeToDeque(const string& array) {
    deque<int> my_deque;
    stringstream ss(array.substr(1, array.size() - 2)); 
    string number;
    
    while (getline(ss, number, ',')) my_deque.push_back(stoi(number)); 
    

    return my_deque;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string op, array;
    while (cin >> op) {
        cin >> n;
        cin >> array;
        deque<int> my_deque = ChangeToDeque(array);
        bool reversed = false;

        for (auto c : op) {
            if (c == 'R') {
                reversed = !reversed;
            } else {
                if (my_deque.empty()) {
                    cout << "error\n";
                    break;
                } else {
                    if (reversed) {
                        my_deque.pop_back();
                    } else {
                        my_deque.pop_front();
                    }
                }
            }
        }

        if (!my_deque.empty()) {
            cout << "[";
            if (reversed) {
                for (auto it = my_deque.rbegin(); it != my_deque.rend(); ++it) {
                    if (it != my_deque.rbegin()) cout << ",";
                    cout << *it;
                }
            } else {
                for (auto it = my_deque.begin(); it != my_deque.end(); ++it) {
                    if (it != my_deque.begin()) cout << ",";
                    cout << *it;
                }
            }
            cout << "]\n";
        } 
    }

    return 0;
}
