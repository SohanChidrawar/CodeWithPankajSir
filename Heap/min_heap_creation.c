#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100

struct Minheap
{
    int size;
    int data[MAX_SIZE];
};

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(struct Minheap *heap, int index)
{
    int parent = (index-1)/2;
    while(index>0 && heap->data[index] < heap->data[parent])
    {
        swap(&heap->data[index], &heap->data[parent]);
        index =  parent;
        parent = (index-1)/2;
    }
}

void insert(struct Minheap *heap, int data)
{
    if(heap->size == MAX_SIZE)
    {
        printf("Heap is full");
        return ;
    }
    heap->data[heap->size] = data;
    heapify(heap,heap->size);
    heap->size++;
}

void printheap(struct Minheap *heap)
{
    for(int i=0;i<heap->size;i++)
        printf("%d ",heap->data[i]);
    printf("\n");
}

int main()
{
    struct Minheap *heap = (struct Minheap*)malloc(sizeof(struct Minheap));
    heap->size = 0;
    
    insert(heap,10);
    insert(heap,40);
    insert(heap,20);
    insert(heap,5);
    insert(heap,1);

    printheap(heap);
}
