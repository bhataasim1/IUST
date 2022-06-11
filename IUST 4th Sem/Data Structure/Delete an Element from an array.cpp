#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, del,pos,i;
    cout<<"Enter the Number of Elements in Array : ";
    cin>>n;
    
    cout<<"Enter the Elements of Array : ";
    for(i=0; i<n; i++){
       cin>>arr[i];
    }
    
    cout<< "Enter the Position of Element to Delete : ";
    cin >> del;
    
    for(i=0; i<n; i++){
        if(arr[i] == del){
            pos = del;
            break;
        }
    }
    for(i = pos - 1; i<n-1; i++){
        arr[i] = arr[i] + 1;
    }
    
    for(i=0; i<n-1; i++){
        cout<<arr[i];
    }

    return 0;
}
