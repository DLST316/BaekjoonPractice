#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
        string op, s_arr;
        int n;
        bool is_reversed = false;
        bool is_error = false;
        cin >> op >> n >> s_arr;

        deque<int> dq;
        int cur = 0;
        for(int i = 1; i+1 < s_arr.size(); i++){
            if(s_arr[i] == ','){
                dq.push_back(cur);
                cur = 0;
            } else {
                cur = 10 * cur + (s_arr[i] - '0');
            }
        }
        if(cur != 0) dq.push_back(cur);

        for(auto c : op){
            switch (c)
            {
            case 'R':
                is_reversed = !is_reversed;
                break;
            case 'D':
                if(dq.empty()){
                    is_error = true;
                    break;
                }
                if(!is_reversed) dq.pop_front();
                else             dq.pop_back();
                break;
            }
        }
        if(!is_error){
            cout << "[";
            if(is_reversed) reverse(dq.begin(),dq.end());
            for (int i = 0; i < dq.size(); i++) {
                    cout << dq[i];
                    if(i != dq.size()-1) cout << ','; 
                }
            cout << ']' << '\n';
        }else{
            cout << "error\n";
        }
        
    }
    
}