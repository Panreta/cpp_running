#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    fputs(str, stdout);  // 输出 "Hello, World!"，不换行
    return 0;
}