#include <iostream>
#include <stack>
using namespace std;

void reverseStack(stack<char> &s) {
    // Base case
    if (s.empty()) {
        return;
    }

    int num = s.top();
    cout<<s.top();
    s.pop();

    // Recursive call
    reverseStack(s);
}

int main(){
    stack<char> S;
    string st="DataStructure";
    for(int i=0; i<st.size(); i++){
        S.push(st[i]);
    }
    reverseStack(S);
}