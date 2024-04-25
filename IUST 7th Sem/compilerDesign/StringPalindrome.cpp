#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cout<< "Enter a String: ";
    cin >> s;

    string rev = s;

    int start = 0;
    int end = s.length() -1;

    while(start <= end){
        if(s[start] != s[end]){
            cout<<"String is not palindrome"<<endl;
            break;
        }
        start++;
        end--;
    }

    if(start > end) {
        cout<<"String is palindrome"<<endl;
    }
}