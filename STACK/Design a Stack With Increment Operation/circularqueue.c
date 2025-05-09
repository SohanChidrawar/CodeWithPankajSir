#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
#include<stdbool.h>

struct Queue
{
    int array[SIZE];
    int rear,front;
};

void Enqueue(struct Queue *q, int key)
{
    if(q->front == (q->rear+1)%SIZE)
    {
        printf("Overflow\n");
        return;
    }
    else if (q->front==-1)
        q->front = q->rear = 0;
    else if (q->rear==SIZE-1)
        q->rear = 0;  
    else
        q->rear = (q->rear+1);
    q->array[q->rear] = key;
}

int Dequeue(struct Queue *q)
{
    if(q->front==-1)
    {
        printf("Queue is empty\n");
        return -1;
    }
    else if (q->front==q->rear)
    {
        int temp = q->array[q->front];
        q->front = q->rear = -1;
        return temp;
    }
    else
    {
        int temp = q->array[q->front];
        q->front = (q->front+1)%SIZE;
        return temp;
    }    
}
void print(struct Queue *q)
{
    if(q->front == -1)
    {
        printf("Queue is Empty\n");
        return;
    }
    printf("Queue:");
    int i = q->front;
    while(true)
    {
        printf("%d ",q->array[i]);
        if(i == q->rear)
            break;
        i = (i+1)%SIZE;
    }
    printf("\n");
}

int main()
{
    struct Queue q;
    q.rear = q.front = -1;

    Enqueue(&q, 10);
    Enqueue(&q, 20);
    Enqueue(&q, 30);
    Enqueue(&q, 40);
    Enqueue(&q, 50);
    print(&q);
    Dequeue(&q);
    print(&q);
    Enqueue(&q,60);
    print(&q);
    Dequeue(&q);
    Enqueue(&q,70);
    print(&q);

    return 0;
}
