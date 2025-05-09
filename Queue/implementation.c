#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct Queue
{
    int array[SIZE];
    int rear;
    int front;
};

void Enqueue(struct Queue *q, int key)
{
    if(q->rear == SIZE -1)
    {   printf("Overflow\n");
        return;
    }
    else if (q->front==-1)
    {
        q->rear = q->front = 0;
    }
    else
        q->rear += 1;
    q->array[q->rear] = key;
}

void print(struct Queue *q)
{
    if(q->front==-1)
    {
        printf("Queue is Empty");
        return;
    }
    printf("Queue: ");

    for(int i=q->front;i<=q->rear;i++)
        printf("%d ",q->array[i]);
    printf("\n");
}

int Dequeue(struct Queue *q)
{
    int temp;
    if(q->front==-1)
    {
        printf("Underflow\n");
    }
    else if (q->front == q->rear)
    {
        int temp = q->array[q->front];
        q->front = q->rear = -1;
        return temp;
    }
    else
    {
        int temp = q->array[q->front];
        q->front += 1;
        return temp;
    }
}

int main()
{
    struct Queue q;
    q.front = q.rear = -1;
    
    Enqueue(&q, 10);
    Enqueue(&q, 1);
    Enqueue(&q, 11);
    Enqueue(&q, 0);
    Enqueue(&q, 20);
    print(&q);
    Dequeue(&q);
    Dequeue(&q);
    Dequeue(&q);
    Dequeue(&q);
    Dequeue(&q);
    print(&q);
}
