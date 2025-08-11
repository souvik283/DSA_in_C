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
    switch (n)
    {
    case 1:
        /* code */
        break;
    
    default:
        break;
    }

}