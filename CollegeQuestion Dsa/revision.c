#include<stdio.h>
# define MAX 5

int stack[MAX];
int top = -1;

void push(int ele){
    if (top == MAX-1){
        printf("uverflow");
    }
    else{
        top = top + 1;
        stack[top] = ele;
    }
}
void pop(){
    if (top == -1){
        printf("uverflow");
    }
    else{
        int ele = stack[top];
        printf("%d", ele);
        top = top - 1;
    }
}
void isEmpty(){
    if (top == -1){
        printf("stck is empty");
    }
    else{
        printf("satck is not empty");
    }
}
void peak(){
    if(top>0){
        int peek = stack[top];
        printf("%d", peek);
        top = top - 1;
    }
    else{
        printf("underflow");
    }
}
void search(){
    
    if (top == -1){
        printf("underflow");
    }
   
    int s;
    printf("We want to search : ");
    scanf("%d", &s);
    int pos = -1;
    for (int i = 0; i <= top; i++){
        if(s == stack[i]){
            pos = i + 1;
        }
    }
    if (pos == -1){
        printf("element not found");
    }
    else{
        printf("element found at given index: %d", pos);
    }
}
void display(){
    if (top == -1)
    {
        printf("stack underflow\n");
    }
    else
    {
        for (int i = top; i >= 0; i--)
            printf("%d ", stack[i]);
    }
}

int main(){
    int ele,ch;
    while(1)
    {
        printf("\n\t\t1. Push");
        printf("\n\t\t2. Pop");
        printf("\n\t\t3. Empty");
        printf("\n\t\t4. Peak");
        printf("\n\t\t5. Display");
        printf("\n\t\t6. Search");
        printf("\n\t\t7. exit");
        printf("\nEnter Choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: printf("Enter element : ");
                    scanf("%d",&ele);
                    push(ele);
                    break;
            case 2: pop();
                    break;
            case 3: isEmpty(); 
                    break;
            case 4: peak(); 
                    break;
            case 5: display();
                    break;
            case 6: search();
                    break;
            case 7: return 0;
        }
    }
    return 0;

}