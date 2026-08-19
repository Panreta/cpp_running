typedef struct {
    int* vals;//main stack 
    int* mins;// minstack
    int size;//How many elements are currently on the stack?
    int capacity;//current allocation.
} MinStack;


MinStack* minStackCreate() {
    MinStack* stack = malloc(sizeof(MinStack));
    stack->capacity = 16;
    stack->size = 0;
    stack->vals = malloc(stack->capacity * sizeof(int));
    stack->mins = malloc(stack->capacity * sizeof(int));
    return stack;
    
}

void minStackPush(MinStack* obj, int value) {
    if(obj->size == obj->capacity){
        obj->capacity *= 2;
        obj->vals = realloc(obj->vals,obj->capacity * sizeof(int));//(original pointer, new size)
        obj->mins = realloc(obj->mins,obj->capacity * sizeof(int));
    }
    obj->vals[obj->size] = value;//stack.append(value)

    //Putting element into the main stack.
    if(obj->size == 0){obj->mins[obj->size] = value;}
    else{int curmin = obj->mins[obj->size - 1];
        obj->mins[obj->size] = (value < curmin) ? value:curmin;}
    obj->size ++;
}

void minStackPop(MinStack* obj) {
    obj->size--;
}

int minStackTop(MinStack* obj) {
    //stack[-1]
    return obj->vals[obj->size - 1];
    
}

int minStackGetMin(MinStack* obj) {
    return obj->mins[obj->size - 1];
    
}

void minStackFree(MinStack* obj) {
    free(obj->vals);
    free(obj->mins);
    free(obj);
}

/*
obj (a MinStack*, e.g. address 5000):
┌─────────────────────────────┐
│ stack     = 2000  (address) │──────► [heap block at 2000: the actual int array]
│ minstack  = 3000  (address) │──────► [heap block at 3000: the actual int array]
│ size      = 3                │
│ capacity  = 16                │
└─────────────────────────────┘
*/