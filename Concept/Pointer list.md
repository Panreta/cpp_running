```c
int count[1001] = {0};//determine a list with all init 0

// if no * here, all entry will be allocated one
char* inputs[] = {"10", "25", "7", "999", "abc"};

```


For input a list into a function, C can only input pointers.

```c
void logistic_regression(double* x, int* y, int n, double* w_out, double* b_out)
                                              ↑
                                        just a plain int
```