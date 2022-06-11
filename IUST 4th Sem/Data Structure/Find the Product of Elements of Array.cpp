#include <iostream>
using namespace std;

void scan_array(int arr[], int n)
{
    cout<< "Enter the Elements of array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}

int product_array(int arr[], int n)
{
    int prod = 1;
    for(int i=0; i<n; i++){
        prod *= arr[i];
    }
    return prod;
}

int main() {
    int arr[100];
    int num, prod;;
    
    cout << "Enter the number of elements of Array : ";
    cin >> num;
    
    scan_array(arr, num);
    prod = product_array(arr, num);
    
    cout << "Product of Elements of Array = " << prod;

    return 0;
}
