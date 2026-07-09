#include <stdio.h>
#include <string.h>

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;   // points to arr[0]

    printf("%d\n", *p);      // 10
    printf("%d\n", *(p+1));  // 20 — moves to next int (4 bytes forward)
    printf("%d\n", *(p+2));  // 30

    ++p;            // p now points to arr[1]
    printf("%d\n", *p);  // 20
}
