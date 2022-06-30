#include <iostream>
using namespace std;

int Fibo(int x)
{
    if(x==1)
       return 1;
    else if(x==2)
       return 1;
    else
       return (Fibo(x-1)+Fibo(x-2));
}
int main() {
    int n;
    cout << "Enter Number ";
    cin >> n;
    for(int i=1; i<=n; i++){
       cout << Fibo(i);
    }
    return 0;
}
