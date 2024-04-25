#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin >> n;

    int temp = n;
    int rev = 0;
    while(temp > 0){
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    if(rev == n){
        cout<<"The number is a palindrome."<<endl;
    }else{
        cout<<"The number is not a palindrome."<<endl;
    }

    return 0;
}

