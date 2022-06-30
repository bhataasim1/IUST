#include <iostream>
using namespace std;

void Decimal(int x)
{
    if(x==0) 
       cout<< "0";
    else if(x==1)
       cout<< "1";
    else
    {
        Decimal(x/2);
        cout << (x%2);
       //return x%2+10*(Decimal(x/2));
    }
}
int main() {
    int n;
    cout << "Enter the Number ";
    cin >> n;
    Decimal(n);

    return 0;
}
