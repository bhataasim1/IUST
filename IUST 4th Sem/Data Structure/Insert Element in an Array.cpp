#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int num, pos, value;
    
    cout << "Enter the Size of Array : ";
    cin >> num;
    
    cout << "Enter the Elements of Array : ";
    for(int i=0; i<num; i++){
        cin >> arr[i];
    }
    
    cout << "Enter the Positon where you want to Insert Element : ";
    cin >> pos;
    
    cout << "Enter the Value you want to Insert : ";
    cin >> value;
    
    for(int i = num - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = value;
    
    for(int i = 0; i <= num; i++){
        cout << " " << arr[i];
    }

    return 0;
}
