#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[100];
    int num;
    
    cout << "Enter the Size of Array : ";
    cin >> num;
    
    cout << "Enter the Elements of Array : ";
    for(int i=0; i<num; i++){
        cin >> arr[i];
    }
    int max_no = INT_MIN;
    int min_no = INT_MAX;
    
    
    for(int i = 0; i < num; i++){
        max_no = max(max_no, arr[i]);
        min_no = min(min_no, arr[i]);
    }
    
    /*  OR USE THIS [Note: while using this, initilize max_no = arr[0] and min_no = [0] first]
    */
    /*
    for(int i=0; i<num; i++){
        if(arr[i] > max_no){
            max_no = arr[i];
        }
        if(arr[i] < min_no){
            min_no = arr[i];
        }
    }
    */
    cout << "Max = " << max_no << " Min = " << min_no;

    return 0;
}
