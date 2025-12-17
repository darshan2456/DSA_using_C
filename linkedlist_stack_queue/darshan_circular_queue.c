#include<stdio.h>
#include<stdlib.h>
typedef struct circular_queue{
    int rear;
    int front;
    int N;
    int* arr;
}circular_queue;

//init function returns -1 on malloc failure and 1 on correct initialization

//enqueue returns 1 on succesful operation and -1 on failure due to full circular queue

//dequeue returns -1 when circular queue is empty and value when operation is succesful

int init_circ_queue(int N, circular_queue* queue_ptr){
    if(N<2) return -1;
    queue_ptr->N=N;
    queue_ptr->rear=0;
    queue_ptr->front=0;
    queue_ptr->arr=malloc(sizeof(int)*N);
    if(queue_ptr->arr==NULL) return -1;
    return 1;
}

void destroy_circ_queue(circular_queue* queue_ptr){
    if(queue_ptr->arr==NULL) return;
    free(queue_ptr->arr);
    queue_ptr->arr=NULL;
}

int enqueue(circular_queue* queue_ptr,int value){
    if(((queue_ptr->rear)+1)%(queue_ptr->N)==queue_ptr->front) return -1;
    queue_ptr->arr[queue_ptr->rear]=value;
    queue_ptr->rear=((queue_ptr->rear)+1)%(queue_ptr->N);
    return 1;
}

int dequeue(circular_queue* queue_ptr){
    if(queue_ptr->rear==queue_ptr->front) return -1;
    int front_value=queue_ptr->front;
    queue_ptr->front=((queue_ptr->front)+1)%(queue_ptr->N);
    return queue_ptr->arr[front_value];
}

void display_circ_queue(circular_queue* queue_ptr){
    int i=queue_ptr->front;
    while(i!=queue_ptr->rear){
        printf("%d->",queue_ptr->arr[i]);
        i=(i+1)%queue_ptr->N;
    }
}

int main(){
    circular_queue rollnos;
    init_circ_queue(5,&rollnos);
    enqueue(&rollnos,89);
    enqueue(&rollnos,18);
    enqueue(&rollnos,40);
    display_circ_queue(&rollnos);
    int num=dequeue(&rollnos);
    printf("\n%d",num);
    destroy_circ_queue(&rollnos);
    display_circ_queue(&rollnos);
    return 0;
}