# 1. Can't define things like ListNode
```c
typedef struct ListNode{
    int val;
    struct ListNode* next;   // ✗ ERROR — "struct ListNode" doesn't exist yet!
} ListNode;
```
Wrong;

Right:
```c
struct ListNode{
    int val;
    struct ListNode* next;   // ✗ ERROR — "struct ListNode" doesn't exist yet!
} ListNode;
```