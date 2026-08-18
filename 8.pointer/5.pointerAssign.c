#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point points[] = {{1, 2}, {3, 4}, {5, 6}};
    struct Point *p = points;   // points to first element

    printf("%d %d\n", p->x, p->y);       //p->x ==(*p).x  /1 2
    p++;
    printf("%d %d\n", p->x, p->y);       // 3 4
    p++;
    printf("%d %d\n", p->x, p->y);       // 5 6

    return 0;
}