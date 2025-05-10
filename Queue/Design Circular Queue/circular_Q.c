typedef struct {
    int *array;
    int front;
    int rear;
    int size;
} MyCircularQueue;

MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    obj->array = (int*)malloc(sizeof(int)*k);
    obj->size = k;
    obj->front =obj->rear = -1;
    return obj;   
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if(obj->front == (obj->rear+1)%(obj->size))
        return 0;
    else if(obj->rear == obj->size-1)
        obj->rear=0;
    else if(obj->front==-1)
        obj->rear = obj->front=0;
    else
        obj->rear +=1;
    obj->array[obj->rear] = value;
    return 1;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if(obj->front == -1)
        return 0;
    else if(obj->front==obj->rear)
        obj->rear=obj->front=-1;
    // else if(obj->front == obj->size-1)
    //     obj->front=0;
    else
        obj->front = (obj->front+1)%obj->size;
    return 1;
}   

int myCircularQueueFront(MyCircularQueue* obj) {
    if(obj->front == -1)
        return -1;
    return obj->array[obj->front];
}

int myCircularQueueRear(MyCircularQueue* obj) {
    if(obj->rear==-1)
        return -1;
    return obj->array[obj->rear];
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    if(obj->front==-1)
        return 1;
    return 0;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    if(obj->front == (obj->rear+1)%(obj->size))
        return 1;
    return 0;
}

void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->array);
    free(obj);
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);
 
 * bool param_2 = myCircularQueueDeQueue(obj);
 
 * int param_3 = myCircularQueueFront(obj);
 
 * int param_4 = myCircularQueueRear(obj);
 
 * bool param_5 = myCircularQueueIsEmpty(obj);
 
 * bool param_6 = myCircularQueueIsFull(obj);
 
 * myCircularQueueFree(obj);
*/
