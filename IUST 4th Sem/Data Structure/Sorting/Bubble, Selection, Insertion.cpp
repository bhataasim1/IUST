#include <iostream>
using namespace std;

/* 
Name : Aasim Ashraf;
Roll NO: CSE-20-LE-63
 */

void bubbleSort(int arr[], int n)
{
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
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

void selectionSort(int arr[], int n)
{
    int temp;
    for(int i=0; i<n; i++)
    {
        int Big = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[Big])
                Big = j;
        }
        temp = arr[i];
        arr[i] = arr[Big];
        arr[Big] = temp;
    }
}

void insertionSort(int arr[], int n)
{
    int temp;
    for(int i = 1; i < n; i++)
    {
        temp = arr[i];
        int j = i-1;

        while(j >= 0 && temp < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int arr[10], n;
    cout << "Size ";
    cin >> n;

    cout << "Elements ";
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    cout << "Unsorted Array ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    cout << "\n----------------------------------------" << endl;

    cout <<"Bubble Sorted Array ";
    bubbleSort(arr, n);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    cout << "\n----------------------------------------" << endl;

    cout <<"Selection Sorted Array ";
    selectionSort(arr, n);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

    
    cout << "\n----------------------------------------" << endl;

    cout <<"Insertion Sorted Array ";
    insertionSort(arr, n);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
}
