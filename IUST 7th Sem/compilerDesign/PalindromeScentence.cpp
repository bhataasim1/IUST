#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter String: " << endl;
    getline(cin, str);
    str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());

    int start = 0;
    int end = str.length() - 1;

    bool isPalindrome = true; 
    while (start <= end) {
        if (str[start] == str[end]) {
            start++;
            end--;
        } else {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}
