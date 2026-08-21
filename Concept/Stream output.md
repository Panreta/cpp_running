| Stream   | Purpose         | Default destination                      |
| -------- | --------------- | ---------------------------------------- |
| `stdin`  | standard input  | keyboard (or piped input)                |
| `stdout` | standard output | terminal — for normal program output     |
| `stderr` | standard error  | terminal — for error/diagnostic messages |

#### Why use `stderr` instead of just `printf` (which writes to `stdout`)



```c
printf("normal output\n");           // goes to stdout
fprintf(stderr, "error message\n");   // goes to stderr
```