#include <iostream>
using namespace std;
/*
Name : Aasim;
Roll No: CSE-20-LE-63;
Sem : 4th;
*/

int Decimal_to_Hexa(int n)
{
    if(n == 0)
        return 0;
    Decimal_to_Hexa(n / 16);
    int Rem = (n % 16);
    if(Rem > 9)
        cout << char(Rem + 55);
    else
        cout << Rem;

    return -1; 
}
int main()
{
    int num;

    cout << "Enter the Decimal Number : ";
    cin >> num;

    cout << "After Converting " << num << " into Hexa = ";
    Decimal_to_Hexa(num);

    return 0;
}
