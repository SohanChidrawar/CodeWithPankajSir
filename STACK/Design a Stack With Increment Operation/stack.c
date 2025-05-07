typedef struct {
    int size;
    int top;
    int *arr;
    
} CustomStack;


CustomStack* customStackCreate(int maxSize) {
    CustomStack* s1 = malloc(sizeof(CustomStack));
    s1->size = maxSize;
    s1->arr = malloc(sizeof(int)*maxSize);
    s1->top = -1;
    return s1;
}

void customStackPush(CustomStack* obj, int x) {
    if(obj->top == obj->size - 1)
    {
        printf("Stack overflow!\n");
        return;
    }
    obj->top += 1;
    obj->arr[obj->top] = x;
    
}

int customStackPop(CustomStack* obj) {
    if(obj->top == -1)
    {
        printf("Underflow");
        return -1;
    }
    int temp = obj->arr[obj->top];
    obj->top -= 1;
    return temp;
}

void customStackIncrement(CustomStack* obj, int k, int val) {
    if(obj->top == -1)
        return;
    for(int i=0;i<k && i<=obj->top;i++)
    {
        obj->arr[i] = obj->arr[i] + val;
    }
}

void customStackFree(CustomStack* obj) {
    if (obj)
    {
        free(obj->arr); 
        free(obj); 
    }
}

/**
 * Your CustomStack struct will be instantiated and called as such:
 * CustomStack* obj = customStackCreate(maxSize);
 * customStackPush(obj, x);
 
 * int param_2 = customStackPop(obj);
 
 * customStackIncrement(obj, k, val);
 
 * customStackFree(obj);
*/
