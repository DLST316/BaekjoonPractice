#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> my_stack;

    string op;
    int input;
    cin >> input;
    while(cin >> op){
        if(op == "push"){
            cin >> input;
            my_stack.push(input);
        }else if(op == "size"){
            cout << my_stack.size() << "\n";
        }else if(op == "empty"){
            cout << my_stack.empty() << "\n";
        }else{
            if(my_stack.empty()) cout << -1 << "\n";
            else{
                cout << my_stack.top() << "\n";
                if(op == "pop") my_stack.pop();
            }
        }
    }
}