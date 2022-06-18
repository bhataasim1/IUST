#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int x)
{
    int start = 0;
    int end = n;
    for(int i=0; i<n; i++){
        int mid = (start + end) / 2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] > x){
            end = mid -1;
        }
        else {
            start = mid +1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the Size of Array : ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the Elements of Array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int find;
    cout << "Enter the Element to Find : ";
    cin >> find;
    
    int result = BinarySearch(arr, n, find);
    
    if(result == -1){
        cout << "Element is not in Array";
    }
    else {
        cout << "Element is in Array at Index : " << result;
    }
   
    // --OR we can use the below code without using "if-else" here--
    /*
    (result == -1) ? cout << "Element is not in Array" : cout << "Element is in Array at Index : " << result;
    */

    return 0;
}
