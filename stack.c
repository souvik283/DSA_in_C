# include <stdio.h>
int arr[100];
int top =-1;

int pop(int item){
    top--;
    return arr[top];
}
void push(int item){
    top++;
    arr[top=item];

}
void display(){
    for (int i = 0; i < top; i++)
    {
        printf("%d", arr[i]);
    }
}

int main (){
    int item ,n, k;
    while (n==0){
    printf("Enter 1 for push, 2 for pop, 3 for display and 0 for exit");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    if (top == 100)
    {
        printf("the stack is overflowed");
    }
    
    
    default:
        break;
    }
}

}