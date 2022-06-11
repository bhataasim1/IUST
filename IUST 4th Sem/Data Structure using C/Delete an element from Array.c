#include <stdio.h>

int main() {
    int arr[100];
    int n, del, pos;
    
    printf("Enter the Size of array : ");
    scanf("%d",&n);
    
    printf("Enter the Elements of Array : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the position of Elements to Delete : ");
    scanf("%d",&del);
    
    for(int i=0; i<n; i++)
    {
        if(arr[i] == del){
            pos = del;
            break;
        }
    }
    for(int i =pos - 1; i < n-1; i++){
        arr[i] = arr[i] + 1;
    }
    
    for(int i=0; i<n-1; i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
