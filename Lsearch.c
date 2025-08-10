#include <stdio.h>
void linear(int arr[],int n, int key);
int main(){
    int n, key;
    printf("Enter the size of the array");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element :", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element which you want to search");
    scanf("%d", &key);
    linear(arr, n, key);
    return 0;
}
void linear(int arr[],int n, int key){
    int pass=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
        pass++;            
            break;
        }    
    }
    if (pass==0)
    {
        printf("the element is not found");
    }else
    {
                printf("the element is founded");

    }
    
    
    
}
