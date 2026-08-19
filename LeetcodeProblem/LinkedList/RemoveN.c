/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* dummy = malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode* cur = dummy;//only wanna proceed on the pointer

    int length = 0;
    while(cur->next){
        cur = cur->next;//Also use pointer make this valid.
        length ++;
    }

    length -= n;

    struct ListNode* start = dummy;
    for(int i = 0;i < length;i ++){
        start = start->next;
    }
    // delete node has successor
   struct ListNode* toDelete = cur->next;
    struct ListNode* end = toDelete->next;
    if(end){
        start->next = end;
        
    }
    else{
        start->next = NULL;
    }
    free(toDelete);

    return dummy->next;


    
}