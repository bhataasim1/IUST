#include<iostream>
using namespace std;

// Find a^b using Recursion

int Power(int b, int p)
{
    if(p == 0)
        return 1;
    else if(p == 1)
        return b;
    else
        return (b * (Power(b,p -1)));
    
}

int main()
{
    int base, pow;

    cout << "Enter the Number : ";
    cin >> base;

    cout << "Enter the Power : ";
    cin >> pow;

    int result = Power(base,pow);
    cout << result;


}
