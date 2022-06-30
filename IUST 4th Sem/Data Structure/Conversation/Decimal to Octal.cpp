#include <iostream>
using namespace std;

void Octal(int x)
{
    if(x<8)
    cout << "8";
    else
    {
      Octal(x/8);
      cout << x%8;
    }
}

int main() {
    int n;
    std::cout << "Enter Number ";
    cin >> n;
    Octal(n);

    return 0;
}
