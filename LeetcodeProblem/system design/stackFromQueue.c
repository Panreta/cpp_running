#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int capa;
    int size;
    int front;
    int* queue;
} MyStack;

static void myStackResize(MyStack* obj) {
    int newCapa = obj->capa * 2;
    int* newQueue = malloc(newCapa * sizeof(int));
    for (int i = 0; i < obj->size; i++) {
        newQueue[i] = obj->queue[(obj->front + i) % obj->capa];
    }
    free(obj->queue);
    obj->queue = newQueue;
    obj->capa = newCapa;
    obj->front = 0;
}

static void enqueue(MyStack* obj, int x) {
    if (obj->size == obj->capa) {
        myStackResize(obj);
    }
    int back = (obj->front + obj->size) % obj->capa;
    obj->queue[back] = x;
    obj->size++;
}

static int dequeue(MyStack* obj) {
    int val = obj->queue[obj->front];
    obj->front = (obj->front + 1) % obj->capa;
    obj->size--;
    return val;
}

MyStack* myStackCreate() {
    MyStack* obj = malloc(sizeof(MyStack));
    obj->capa = 16;
    obj->size = 0;
    obj->front = 0;
    obj->queue = malloc(obj->capa * sizeof(int));
    return obj;
}

void myStackPush(MyStack* obj, int x) {
    enqueue(obj, x);
    int rotations = obj->size - 1;   // everything already in the queue before x
    for (int i = 0; i < rotations; i++) {
        enqueue(obj, dequeue(obj));  // move it behind x
    }
}

int myStackPop(MyStack* obj) {
    return dequeue(obj);
}

int myStackTop(MyStack* obj) {
    return obj->queue[obj->front];
}

bool myStackEmpty(MyStack* obj) {
    return obj->size == 0;
}

void myStackFree(MyStack* obj) {
    free(obj->queue);
    free(obj);
}