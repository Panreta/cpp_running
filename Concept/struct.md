

```c
struct Person {
    char name[20];
    int age;
};

struct Person p1;   // must write "struct" every time you declare one
struct Person p2;
```

```c
struct Person {
    char name[20];
    int age;
} p1, p2;            // p1 and p2 exist right now, no separate line needed
```

### The one rule to remember

**Without `typedef`, you always need the word `struct` in front of the type name** — whether declaring now or later:

```c
struct Person p3;    // ✓ correct
Person p3;           // ✗ error — "Person" alone doesn't exist without typedef
```


```c
typedef struct {
    char name[20];
    int age;
} Person;

Person p3;          
```