#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);//get 缓冲区溢出
    printf("You entered: %s", str);
    return 0;
}