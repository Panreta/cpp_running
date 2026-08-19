int getSum(int a, int b) {// & | ^  01^10 = 11; 11 10
    while(b != 0){
        int withoutCarry = a ^ b;
        unsigned int carry = (unsigned int)(a&b) << 1;
        a = withoutCarry;
        b = carry;
            }
    return a;
}