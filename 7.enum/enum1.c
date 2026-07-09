#include <stdio.h>

enum DAY {
    MON = 60, TUE, WED, THU, FRI = 67, SAT, SUN// MON-THU will be the a rule, rest of them will be in another
};

int main() {
    enum DAY today = SUN;
    printf("Day number: %d\n", today);  // prints 3
    return 0;
}