#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isGood(const string &s) {
    stack<char> st;
    for(char c:s) {
        if (c == '(' || c == '[' || c == '{') {
            if(!st.empty()) {
                char top = st.top();
                if ((c == '[' && top == '(') || (c == '{' && (top == '(' || top == '['))) return false;
            }
            st.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (st.empty()) return false;
            char top = st.top();
            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) return false;
            st.pop();
        }
    }
    return st.empty();
}

int main() {

    string s;
    getline(cin, s);

    if(isGood(s)) cout << "Bem formada" << endl;
    else cout << "Mal formada" << endl;

    return 0;
}