#include<bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string &str) {
    stack<char> s;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            s.push(str[i]);
        } else {
            if (s.empty()) {
                return false;
            }
            char top = s.top();
            s.pop();
            if ((str[i] == ')' && top != '(') || (str[i] == '}' && top != '{') || (str[i] == ']' && top != '[')) {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (isValidParenthesis(str)) {
        cout << "Valid Parenthesis" << endl;
    } else {
        cout << "Invalid Parenthesis" << endl;
    }
    return 0;
}