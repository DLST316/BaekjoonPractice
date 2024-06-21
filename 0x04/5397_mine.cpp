#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<string> passwords_input;
    vector<list<char>> passwords;
    string s;
    int num;
    cin >> num;
    while (cin >> s){
        passwords_input.push_back(s);
    }
    
    for(auto s : passwords_input){
        list<char> password;
        auto cursor = password.begin();
        for(auto c : s){
            
            
            if(c == '<'){
                if(cursor != password.begin()){
                    cursor--;
                } 
            }else if(c == '>'){
                if(cursor != password.end()){
                    cursor++;
                } 
            }else if(c == '-'){
                if (cursor != password.begin()) {
                    cursor = password.erase(--cursor);
                }
            }else{
                password.insert(cursor,c);
                
            }

           
            
        }
        for(auto c : password) cout << c;
        cout << "\n";
    }
}
