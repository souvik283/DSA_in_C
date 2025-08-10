#include <stdio.h>
void binary(int arr[],int n, int key);
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
    printf("Enter the element which you want to search : ");
    scanf("%d", &key);
    binary(arr, n, key);
    return 0;
}
void binary(int arr[],int n, int key){
    int min=0;
    int max=n;
    int mid;
    int pass =0;
    while (max >= min)
    {
        mid=(max + min)/2;
        if (arr[mid] == key)
        {
            printf("the element is  found");
           pass++;
           break;

        }else if (key > arr[mid])
        {
            min=mid+1;
        }else if (key < arr[mid])
        {
            max=mid-1;
        }
        
        
    }
    if (pass==0)
    {
        printf("the element is not found");
    }
    
    
}