#include <iostream>
#include <stack>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int input,sum = 0;
    stack<int> my_stack;

    cin >> input;

    while(cin >> input){
        if(input != 0)  my_stack.push(input);
        else my_stack.pop();
    } 
    while(!my_stack.empty()){
        sum += my_stack.top();
        my_stack.pop();
    }
    cout << sum;
}