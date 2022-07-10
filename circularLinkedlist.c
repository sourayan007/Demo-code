#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* head = NULL;
struct Node* tail = NULL;

void createCLL(){
    struct Node* temp, *newnode;
    int n;
    printf("Enter the the no of data u want to insert");
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        static int x = 1;
        newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->next = 0;
        printf("Enter no %d the data : ", x);
        scanf("%d",&newnode->data);
        if(head == NULL){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }

        newnode->next = head;
        x++;
    }
}

void display(){
    struct Node* temp = head;
    while (temp->next != head)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ",temp->data);
    printf("%d ",temp->next->data);
    
}


void createCLLTail(){
    struct Node *newnode;
    int n;
    printf("Enter the the no of data u want to insert");
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        static int x = 1;
        newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->next = 0;
        printf("Enter no %d the data : ", x);
        scanf("%d",&newnode->data);
        if(tail == NULL){
            tail =  newnode;
            tail->next = newnode;
        }
        else{
            newnode->next = tail->next;
            tail->next = newnode;
            tail = newnode;
        }
        x++;
    }
}

void displayTail(){
    struct Node* temp = tail->next;
    while (temp->next != tail->next)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ",temp->data);
    printf("%d ",temp->next->data);
    
}


void main(){
    // createCLL();
    // display();
    createCLLTail();
    displayTail();
}