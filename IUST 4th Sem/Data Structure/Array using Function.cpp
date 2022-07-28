#include<iostream>
using namespace std;

void ScanArray(int arr[], int n)
{
    cout << "Enetr the Elements of Array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
}

void DisplayArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout << arr[i] << endl;
}

void AddArray(int arr[], int n)
{
    int sum = 0;

    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
}

void ProductArray(int arr[], int n)
{
    int prod = 1;
    for(int i=0; i<n; i++){
        prod *= arr[i];
    }
    cout << prod << endl;
}

int main()
{
    int arr[100];
    int n;

    cout << "Enter the Size of Array : ";
    cin >> n;

    ScanArray(arr, n);

    cout << "Displaying Array " << endl;
    DisplayArray(arr, n);

    cout << "Displaying Sum of Elements of Array " << endl;
    AddArray(arr, n);

    cout << "Displaying the Product of Array " << endl;
    ProductArray(arr, n);

    return 0;
}
