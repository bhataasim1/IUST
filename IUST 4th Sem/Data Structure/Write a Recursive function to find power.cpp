#include <iostream>
using namespace std;

int Power(int x, int y)
{
    if(y==1)
       return x;
    else
       return (x*(Power(x,y-1)));
}
int main() {
    int n, p;
    cout << "Enter the Number ";
    cin >> n;
    cout << "Enter the Power ";
    cin >> p;
    cout<<"The Power = "<< Power(n,p);

    return 0;
}
