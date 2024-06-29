#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string input;
    string func;
    while(cin >> func){
        cin >> n;
        cin >> input;
        input = input.substr(1, input.size() - 2);
        deque<int> dq,replaceDq;
        stringstream ss(input);
        string token;
        
        while (getline(ss, token, ',')) dq.push_back(stoi(token)); //parsing
        
        for(auto op : func){
            int dq_size = dq.size();
            if(op == 'R'){
                for (size_t i = 0; i < dq_size; i++){
                    int back = dq.back();
                    dq.pop_back();
                    replaceDq.push_back(back);
                }
                dq = replaceDq;
            }else{
                if(dq.empty()){
                    cout << "error\n";
                    continue;
                }  
                else{
                    dq.pop_front();
                }
            }

            
        }
        cout << "[";
        for(auto it = dq.begin(); it != dq.end(); ++it){
            cout << *it;
            if(it != dq.end()-1) cout << ",";
        }
        cout << "]\n";
    }
    

    return 0;
}
