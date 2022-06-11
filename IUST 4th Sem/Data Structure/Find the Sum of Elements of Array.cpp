#include <iostream>
using namespace std;

void scan_array(int arr[], int n)
{
    cout<<"Enter the Elements of array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
int sum_array(int arr[], int n)
{
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int main() {
    int arr[100];
    int num, sum;
    
    cout<<"Enter the Number of Elements in array : ";
    cin>> num;
    
    scan_array(arr, num);
    sum = sum_array(arr, num);
    
    cout<<"Sum of Elements of Array = " << sum;
    return 0;
}
