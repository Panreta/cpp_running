```c
void *malloc(unsigned int size);
```
input: number of bytes you want
malloc() 函数会返回一个指针，指向分配的内存空间。如果分配出现错误，则返回 NULL。

Release: free()

【实例】某明星的演唱会，会馆可以容纳一万人。申请内存，存储人数信息，并将人数输出。

```c
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int* iIntMalloc;
    iIntMalloc = (int*)malloc(sizeof(int)); /* 分配一个整型内存空间 */
    *iIntMalloc = 10000; /* 使用该空间保存人数信息 */
    printf("现场有%d人\n", *iIntMalloc); /* 输出数据 */
    free(iIntMalloc);
    return 0;
}
```


```c
int* numbers = malloc(capacity * sizeof(int));
// no initialization, so
memset(numbers, 0, capacity * sizeof(int)); // doesn't change the size, not like realloc.

//For 2 sum problem, self-defined the elements
int * res = malloc(2 * sizeof(int));
res[0] = i;
res[1] = j;

// Same as
int* numbers = calloc(capacity, sizeof(int));

```