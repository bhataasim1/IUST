#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, i, pos, del;
    cout << "Enter the Size of Array : ";
    cin >> n;

    cout << "Enter the Elements of array ";
    for(i =0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the Pos of Elemet to Delete ";
    cin >> pos;

    for(i = pos -1; i< n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    for(i = 0; i<n-1; i++)
    {
        cout << arr[i] << endl;
    }
}
