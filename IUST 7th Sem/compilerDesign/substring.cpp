#include<bits/stdc++.h>
using namespace std;

bool isSubstring(string &mainString, string &subString) {
    int mainLength = mainString.length();
    int subLength = subString.length();

    for(int i = 0; i <= mainLength - subLength; i++) {
        int j;
        for(j = 0; j < subLength; j++) {
            if(mainString[i+j] != subString[j]) {
                break;
            }
        }
        if(j == subLength) {
            return true;
        }
    }
    return false;
}

int main() {
    string mainString, subString;

    cout<< "Enter a Main String: ";
    cin >> mainString;

    cout<< "Enter a Sub String: ";
    cin >> subString;

    if(isSubstring(mainString, subString)) {
        cout<<subString<<" is a substring of "<<mainString<<endl;
    } else {
        cout<<subString<<" is not a substring of "<<mainString<<endl;
    }
}