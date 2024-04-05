# include <stdio.h>
# include <stdlib.h>

typedef struct Node {
    int value;
    struct Node * next;
}node;

node * head = NULL;

// initialize node
node * init(int val) {
    node * newNode = (node *) malloc(sizeof(node));
    newNode->value = val;
    newNode->next = NULL;
    return newNode;
}

//  NULL
// insert 1 : linkedlist:: 1 -> NULL

// 1 -> 2 -> 3-> Null
//  insert 4: linkedlist:: 4 -> 1 -> 2 -> 3 -> null

void insertFirst(int val) {
    if (head == NULL) {
        node * newNode = init(val);
        head = newNode;
        return;
    }
    node * newNode = init(val);
    newNode->next = head;
    head = newNode;
}

//  NULL
// insert 1 : linkedlist:: 1 -> NULL

// 1 -> 2 -> 3-> Null
//  insert 4: linkedlist:: 1 -> 2 -> 3 -> 4 -> null

void insertLast(int val) {
    node * newNode = init(val);
    if (head == NULL){
        head =  newNode;
        return;
    }
    node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
//  NULL
// deletefirst 1 linkedlist:: null 

// 1 -> 2 -> 3-> Null
//  deletefirst: linkedlist:: 2 -> 3 -> null

void deleteFirst() {
    if (head == NULL) {
        printf("Empty Linked List\n");
        return;
    }
    printf("deleted %d\n", head->value);
    head = head->next;
}

//  NULL
// deletelast: linkedlist:: null 

// 1 -> NULL
// deletelast: linkedlist:: NULL

// 1 -> 2 -> 3-> Null
// deletelast: linkedlist:: 1 -> 2 -> null

void deleteLast() {
    node *temp = head;
    if(head == NULL){
        printf("Empty linkedlist\n");
        return;
    }
    if(head->next == NULL){
        deleteFirst();
        return;
    }

    while(temp->next->next != NULL){
        temp = temp->next;
    }
    temp->next = NULL;

}


void display() {
    if (head == NULL) {
        printf("Empty Linked List\n");
        return;
    }
    node * temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->value);
        temp = temp->next;
    }
    printf("null\n");
}

int main() {
    deleteFirst();
    display();
    insertFirst(10);
    display();
    insertFirst(11);
    display();
    insertLast(18);
    display();
    insertLast(86);
    display();
    deleteFirst();
    display();
    deleteLast();
    display();
    return 0;
}