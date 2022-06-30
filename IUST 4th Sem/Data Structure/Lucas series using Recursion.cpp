#include <iostream>
using namespace std;

int Lucas(int x)
{
    if(x==1)
       return 1;
    else if(x==2)
       return 1;
    else if(x==3)
       return 1;
    else
       return (Lucas(x-1)+Lucas(x-2)+Lucas(x-3) );
}
int main() {
    int n;
    cout << "Enter Number ";
    cin >> n;
    for(int i=1; i<=n; i++){
       cout << Lucas(i);
    }
    return 0;
}
