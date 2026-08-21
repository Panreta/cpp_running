`stdlib.h` is where the standard library declares functions like:

|Function|What it does|
|---|---|
|`malloc()`|allocate heap memory|
|`free()`|release heap memory|
|`calloc()`|allocate + zero-initialize heap memory|
|`realloc()`|resize a previous allocation|
|`exit()`|terminate the program|
|`atoi()`|convert string to int|

```c
int* numbers = malloc(capacity * sizeof(int));
// no initialization, so
memset(numbers, 0, capacity * sizeof(int)); // manually zero it

//For 2 sum problem, self-defined the elements
int * res = malloc(2 * sizeof(int));
res[0] = i;
res[1] = j;

// Same as
int* numbers = calloc(capacity, sizeof(int));

```