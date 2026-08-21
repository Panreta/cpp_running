| Part        | Meaning                                                                                                                       |
| ----------- | ----------------------------------------------------------------------------------------------------------------------------- |
| `exit(...)` | a function from `stdlib.h` that terminates the program **immediately** — no matter where in the code it's called from         |
| `1`         | the **exit status code** — a number reported back to whatever launched your program (the terminal, a script, another program) |
| 0           | success                                                                                                                       |
| -1          | generic failure — common but not very descriptive                                                                             |


```c
if (numbers == NULL) {

	printf("Initial allocation failed.\n");
	
	exit(1); //without it, the algo will go on and find no numbers 

}
```
```
  
I always check malloc/calloc for NULL before using the pointer — dereferencing a NULL pointer causes a segmentation fault, so I exit cleanly instead of letting the program crash uncontrolled.
```

```c
if( divisor == 0){

	fprintf(stderr, "除数为 0 退出运行...\n");
	
	exit(EXIT_FAILURE);

}

quotient = dividend / divisor;

fprintf(stderr, "quotient 变量的值为: %d\n", quotient );

exit(EXIT_SUCCESS);
```
If you open stdlib.h, you will see:
1. EXIT_FAILURE is 1
2. EXIT_SUCCESS is 0