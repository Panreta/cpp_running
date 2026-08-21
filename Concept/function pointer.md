```c
int compare(const void *a, const void *b) {

	return (*(int*)a - *(int*)b);

}
```


generic pointer: void \*a, can do int double float

const: promise won't change the value

\*(int\*)a: even though it's generic, still need to clarify the type of a:

When it comes to flow, it's almost the same.

```c
int compare(const void *a, const void *b) {

	return (*(float*)a - *(float*)b);

}
```

