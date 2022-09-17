#include<iostream>
using namespace std;

int Binary_Search(int arr[], int lb, int ub, int find)
{
    int Mid = (lb + ub) / 2;
    if(arr[Mid] > find)
        return Binary_Search(arr,lb, Mid -1, find);
    else if(arr[Mid] < find)
        return Binary_Search(arr, Mid + 1, ub, find);
    else
        return Mid;
    
    return -1;
}

int main()
{
    int arr[100], n, find;

    cout << "Enter the Size of Array : ";
    cin >> n;

    cout << "Enter the Elements of Array : ";
    for (int i=0; i<n; i++)
        cin >> arr[i];
    
    cout << "Enter the Element to Find : ";
    cin >> find;

    int result = Binary_Search(arr, 0, n-1, find);
    
    (result == -1) ? cout << "Not Found" : cout << "Found at Index " << result;
}
