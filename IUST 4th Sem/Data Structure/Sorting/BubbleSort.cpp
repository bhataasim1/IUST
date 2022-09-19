#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int temp;
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }    
    }
}
int main()
{
    int arr[100], n;
    cout << "Enter the Size of Array : ";
    cin >> n;

    cout << "Enter the Elements of Array : ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    bubbleSort(arr, n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
