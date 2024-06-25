#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string sentence;
    while(true){
        stack<char> my_stack;
        getline(cin, sentence);
        if(sentence == ".") break;
        bool is_balanced = true; 

        for (auto c : sentence) {
            if (c == '(' || c == '[') {
                my_stack.push(c);
            } else if (c == ')') {
                if (my_stack.empty() || my_stack.top() != '(') {
                    is_balanced = false;
                    break;
                } else {
                    my_stack.pop();
                }
            } else if (c == ']') {
                if (my_stack.empty() || my_stack.top() != '[') {
                    is_balanced = false;
                    break;
                } else {
                    my_stack.pop();
                }
            }
        }

        if (!is_balanced || !my_stack.empty()) {
            cout << "no\n";
        } else {
            cout << "yes\n";
        }
    }

    
}
