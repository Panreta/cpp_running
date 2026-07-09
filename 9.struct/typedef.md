Without typedef
Every time you declare a variable you must write struct:
cstruct Point {
    int x;
    int y;
};

struct Point p1;        // must write "struct" every time
struct Point p2;
struct Point *p3;

With typedef
Create an alias so you can drop the struct keyword:
ctypedef struct {
    int x;
    int y;
} Point;

Point p1;        // cleaner
Point p2;
Point *p3;

---

1.typedef 仅限于为类型定义符号名称，#define 不仅可以为类型定义别名，也能为数值定义别名，比如您可以定义 1 为 ONE。
2.typedef 是由编译器执行解释的，#define 语句是由预编译器进行处理的。