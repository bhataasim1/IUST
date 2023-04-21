//write a prog to merge sort
#include <iostream>
using namespace std;
void merge(int a[], int low, int mid, int high)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
}
void mergeSort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
int main()
{
    int myarray[30], num;
    cout << "Enter the number of elements to be sorted: ";
    cin >> num;
    cout << "Enter " << num << " elements: ";
    for (int i = 0; i < num; i++)
    {
        cin >> myarray[i];
    }
    mergeSort(myarray, 0, num - 1);
    cout << "Sorted array is: ";
    for (int i = 0; i < num; i++)
    {
        cout << myarray[i] << " ";
    }
    return 0;
}
