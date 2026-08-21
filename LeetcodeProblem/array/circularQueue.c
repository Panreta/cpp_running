


typedef struct {
    int* data;
    int head;
    int size;
    int capa;
    
} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* q = malloc(sizeof(MyCircularQueue));
    q->data = malloc(k * sizeof(int));
    q->head = 0;
    q->size = 0;
    q->capa = k;
    return q;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
    if(obj->size == obj->capa){return false;}//これは满员ですね。
    int tail = (obj->head + obj->size) % obj->capa;
    obj->data[tail] = value;
    obj->size ++;
    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if(obj->size == 0){return false;}
    obj->head = (obj->head + 1)%obj->capa;
    obj->size--;
    return true;
    
}

int myCircularQueueFront(MyCircularQueue* obj) {
    if(obj->size == 0){return -1;}
    return obj->data[obj->head];
    
}

int myCircularQueueRear(MyCircularQueue* obj) {
    if(obj->size == 0){return -1;}
    int tail = (obj->head + obj->size - 1) % obj->capa;
    return obj->data[tail];
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    return obj->size == 0;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    reurn obj -> size == obj -> capa;
}

void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->data);
    free(obj);
}

