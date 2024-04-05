#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}sl;
sl *top = NULL;

void push(int value){
    sl *newnode;
    newnode = (sl*)malloc(sizeof(sl));

    newnode->data = value;
    newnode->next = top;
    top = newnode;
}

void pop(){
    if(top == NULL){
        printf("stack is empty");
    }
    else{
        printf("%d",top->data);
        top = top -> next;
    }
}
void peak(){
    if (top == NULL){
        printf("stack is empty");
    }
    else{
        printf("top element is = %d",top->data);
    }
}

void display(){
    struct node *temp;
    temp = top;

    if (top == NULL){
        printf("Underflow");
    }
    else{
        while(temp != NULL){
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }
}

int main(){
    int ele,ch;
    while(1)
    {
        printf("\n\t\t1. Push");
        printf("\n\t\t2. Pop");
        printf("\n\t\t3. Peak");
        printf("\n\t\t4. Display");
        printf("\n\t\t5. exit");
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
            case 3: peak(); 
                    break;
            case 4: display();
                    break;
            case 5: return 0;
        }
    }
    return 0;

}