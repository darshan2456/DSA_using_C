#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
}Node;

//insert functions returns 1 on succesful insertion and -1 on malloc failure 
//delete functions return 1 on successful deletion and -1 on failure due to empty list
//methods implemented are - insertAtBeginning, insertAtEnd, printlist, search, deleteAtBeginning, deleteAtEnd and deleteByValue
int insertAtBeginning(Node** head_ref,int value){
    Node* newnode=malloc(sizeof(Node));
    if(newnode==NULL) return -1;
    newnode->data=value;
    if(*head_ref==NULL){
        newnode->next=NULL;
        newnode->prev=NULL;
        *head_ref=newnode;
        return 1;
    }
    newnode->next=*head_ref;
    newnode->prev=NULL;
    (*head_ref)->prev=newnode;
    *head_ref=newnode;
    return 1;
}

int insertAtEnd(Node** head_ref,int value){
    Node* newnode=malloc(sizeof(Node));
    if(newnode==NULL) return -1;
    newnode->data=value;
    if(*head_ref==NULL){
        newnode->next=NULL;
        newnode->prev=NULL;
        *head_ref=newnode;
        return 1;
    }
    Node* temp=*head_ref;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    newnode->prev=temp;
    newnode->next=NULL;
    temp->next=newnode;
    return 1;
}

void printlist(Node* head){
    printf("\n");
    while(head!=NULL){
        printf("%d <->",head->data);
        head=head->next;
    }
    printf("NULL");
}

int search(Node* head,int key){
    int index=0;
    while(head!=NULL){
        if(head->data==key){
            return index;           //if value found returns index number 
        }
        head=head->next;
        index++;
    }return -1;                     //otherwise returns -1
}

int deleteAtBeginning(Node** head_ref){
    if(*head_ref==NULL) return -1;
    if((*head_ref)->next==NULL){
        free(*head_ref);
        *head_ref=NULL;
        return 1;
    }
    Node* secondnode=(*head_ref)->next;
    free(*head_ref);
    secondnode->prev=NULL;
    *head_ref=secondnode;
    return 1;
}

int deleteAtEnd(Node** head_ref){
    if(*head_ref==NULL) return -1;
    if((*head_ref)->next==NULL){
        free(*head_ref);
        *head_ref=NULL;
        return 1;
    }
    Node* temp=*head_ref;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* secondlast=temp->prev;
    free(temp);
    secondlast->next=NULL;
    return 1;
}

int deleteByValue(Node** head_ref, int key){
    if(*head_ref==NULL) return -1;
    if((*head_ref)->next==NULL && (*head_ref)->data==key){
        free(*head_ref);
        *head_ref=NULL;
        return 1;
    }
    Node* temp=*head_ref;
    while(temp!=NULL){
        if(temp->data==key){
            Node* beforekey=temp->prev;
            Node* afterkey=temp->next;
            if(beforekey==NULL){
                *head_ref=temp->next;
                (*head_ref)->prev=NULL;
                free(temp);
                return 1;
            }
            beforekey->next=afterkey;
            afterkey->prev=beforekey;
            free(temp);
            return 1;
        }
        temp=temp->next;
    }
    return -1;
}

int main(){
    Node* head=NULL;
    insertAtBeginning(&head,43);
    insertAtBeginning(&head,87);
    insertAtBeginning(&head,19);
    insertAtEnd(&head,39);
    printlist(head);
    deleteAtBeginning(&head);
    printlist(head);
    int index=search(head,39);
    printf("\n39 found at index %d",index);
    deleteByValue(&head,43);
    printlist(head);
    return 0;
}