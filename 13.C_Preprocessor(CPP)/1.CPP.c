#include <stdio.h>

// Define constant macro
#define PI 3.1415926
#define GREETING "Hello, World!"

// Define function-like macro (note the use of parentheses)
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// 条件编译示例
#define DEBUG 1 // can be anything, just need to have a def

int main() {
    // 使用常量宏
    printf("PI的值: %f\n", PI);
    printf("%s\n", GREETING);
    
    // 使用函数式宏
    int x = 5;
    printf("%d的平方是: %d\n", x, SQUARE(x));
    printf("3和5中较大的数是: %d\n", MAX(3, 5));
    
    // 条件编译示例
    #ifdef DEBUG // if DEBUG is defined, then compile the following code
    printf("[调试信息] 程序运行到main函数\n");
    #endif
    
    // 编译器版本检查
    #if __STDC_VERSION__ >= 201112L
    printf("使用C11标准\n");
    #elif __STDC_VERSION__ >= 199901L
    printf("使用C99标准\n");
    #else
    printf("使用C89/C90标准\n");
    #endif
    
    // 错误指令示例（取消注释将导致编译错误）
    // #error "这是一个手动触发的错误"
    
    return 0;
}