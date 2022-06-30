#include <iostream>
using namespace std;

int Factorial(int x)
{
    if(x==0 || x==1)
       return 1;
    else
       return (x*(Factorial(x-1)));
}
int main() {
    int n;
    cout << "Enter the Number ";
    cin >> n;
    cout<<"The Factorial of Number is "<< Factorial (n);

    return 0;
}
