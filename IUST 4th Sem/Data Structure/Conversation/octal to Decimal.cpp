#include<iostream>
using namespace std;

int OctaltoDecimal(int n)
{
    if(n < 8)
        return n;
    else
        return (n%10 + 8 *(OctaltoDecimal(n/10)));
}

int main()
{
    int num;

    cout << "Enter the Octal Number ";
    cin >> num;

    int dec = OctaltoDecimal(num);
    cout << num << " to Decimal = " << dec;

    return 0;
}
