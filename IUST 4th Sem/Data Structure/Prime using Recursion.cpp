#include <iostream>
using namespace std;

bool is_Prime(int n, int k)
{
    if(k <= 2) 
          return true;
    if(n % k == 0)
          return false;
    return is_Prime(n, k-1);
}

bool isPrime(int n)
{
    return is_Prime(n, n-1);
}

int main() {
    int num;
    cout << "Enter Number ";
    cin >> num;
    
    if(isPrime(num))
       cout << num << " is Prime Number";
    else
       cout << num << " is Not Prime Number";

    return 0;
}
