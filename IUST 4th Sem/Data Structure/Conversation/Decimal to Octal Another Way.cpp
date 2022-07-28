#include<iostream>
using namespace std;

int DecimaltoOctal(int n)
{
    if(n < 8)
        return n;
    else
        return (n%8 + 10 * (DecimaltoOctal(n/8)));
}

int main()
{
    int num;

    cout << "Enter the Number ";
    cin >> num;

    int octal = DecimaltoOctal(num);

    cout << num << " to Octal = " << octal;

    return 0;
}
