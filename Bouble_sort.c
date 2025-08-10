#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the array");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element :", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n-1; i++){
        int pass=0;
        for (int j = 0; j < n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                pass++;
            }
            if(pass==0){
                break;
            }
        }
    }
            printf("the sorted array is : ");
    for (int k = 0; k < n; k++)
    {
        printf("%d \t", arr[k]);
    }
    
    
    return 0;
}