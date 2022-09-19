#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    int temp;
    for(int i = 0; i < n - 1; i++)
    {
        int Big = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[Big])
            {
                Big = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[Big];
        arr[Big] = temp;
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

    selectionSort(arr, n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
