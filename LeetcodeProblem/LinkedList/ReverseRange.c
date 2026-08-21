 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    struct ListNode* dummy = malloc(sizeof(struct ListNode));
    dummy -> next = head; 

    struct ListNode* prev = dummy;

    for(int i = 0;i < left - 1;i++){
        prev = prev -> next;
    }

    struct ListNode* cur = prev->next;//1st in the reverse range
    struct ListNode* prevInner = NULL;
    for(int i = 0;i < right - left + 1;i ++){//operating 3 node in the same time
        //这里运用了互文的手法，把哪一个变量赋完值就可以更新哪个变量
        struct ListNode* nextTemp = cur ->next;
        cur -> next = prevInner;
        prevInner = cur;
        cur = nextTemp;
    }
    prev->next->next = cur;// 1 -> 2 <-3 <-4 <- 5; 1->next->next = 2->next = 5;
    prev ->next = prevInner;//1->next = 4;

    struct ListNode* res = dummy ->next;
    free(dummy);
    return res;
}