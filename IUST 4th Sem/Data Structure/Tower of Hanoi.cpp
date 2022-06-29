#include <iostream>
using namespace std;

void toh(int x, char beg, char mid, char end)
{
    if(x==1)
    cout<<beg<<" -> "<<end << endl;
    else
    {
        toh(x-1, beg, end, mid);
        cout<<beg<<" -> " << end <<endl;
        toh(x-1, mid, beg, end);
    }
}
int main() {
    int n = 4;
    toh(n, 'a','b','c');

    return 0;
}
