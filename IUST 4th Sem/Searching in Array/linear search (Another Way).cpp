#include <iostream>
using namespace std;

int Linearsearch(int arr[], int n, int x)
{
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main() {
    
    int arr[100];
    int n, find;
    
    cout << "Enter the Size of Array : ";
    cin >> n;
    
    cout << "Enter the Elements of Array : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout << "Enter the Element to Find in Array : ";
    cin >> find;
    
    int result = Linearsearch(arr, n, find);
    
    (result == -1) ? cout << "Element is not in Array" : cout << "Element is in array at Index : " << result;

    return 0;
}
