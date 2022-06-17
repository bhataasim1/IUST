#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n;
    cout << "Enter the Size of Array : ";
    cin >> n;
    
    cout << "Enter the Elements of Array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int find;
    cout << "Enter the Element you want to find : ";
    cin >> find;
    
    for(int i=0; i<n; i++){
        if(arr[i] == find){
            cout << "Element is in Array : " << arr[i];
        }
    }

    return 0;
}
