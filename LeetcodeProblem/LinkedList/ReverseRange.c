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
        struct ListNode* nextTemp = cur ->next;
        cur -> next = prevInner;
        prevInner = cur;
        cur = nextTemp;
    }
    prev->next->next = cur;
    prev ->next = prevInner;

    struct ListNode* res = dummy ->next;
    free(dummy);
    return res;
}