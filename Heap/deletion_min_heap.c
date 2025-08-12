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

void heapifyUp(struct Minheap *heap, int index)
{
    int parent = (index-1)/2;
    while(index>0 && heap->data[index] < heap->data[parent])
    {
        swap(&heap->data[index], &heap->data[parent]);
        index =  parent;
        parent = (index-1)/2;
    }
}

void heapifyDown(struct Minheap *heap, int index)
{
    int k = index;
    int l = 2*k+1;
    int r = 2*k+2;

    if(l <= heap->size && heap->data[l] < heap->data[k])
        k = l;
    if(r <= heap->size && heap->data[r] < heap->data[k])
        k = r;

    if(index != k)
    {
        swap(&heap->data[index], &heap->data[k]);
        heapifyDown(heap,k);
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
    heapifyUp(heap,heap->size);
    heap->size++;
}

void deleteatindex(struct Minheap *heap, int k)
{
    if(k<0 || k>=heap->size)
        printf("Invalid index");
    
    heap->data[k] = heap->data[heap->size-1];
    heap->size--;

    //reheapify
    int parent = (k-1)/2;
    if(k<0 || heap->data[k]<heap->data[parent])
        heapifyUp(heap,k);
    else
        heapifyDown(heap,k);
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
    // printf("\n");

    deleteatindex(heap,2);
    printheap(heap);
}
