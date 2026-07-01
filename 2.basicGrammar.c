#include <stdio.h>
#define PI 3.1415 // Macro

// func announcement
int add(int a,int b);

int main(){// int main(int argc, char *argv[])
    //var announce
    int num1,num2,sum;

    printf("Enter 2 int: ");
    scanf("%d %d",&num1,&num2);

    // if
    if (num1 > num2){
        printf("num1 is greater!\n");
    }
    else{printf("num2 is greater!\n");}

    // func using
    sum = add(num1,num2);
    printf("Sum %d\n",sum);
    printf("Pi is %2f",PI);

    return 0;
}

int add(int a,int b){
    return a + b;
}