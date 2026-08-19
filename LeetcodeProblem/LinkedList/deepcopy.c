 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */

struct Node* copyRandomList(struct Node* head) {
    //Corner case check
    if(!head){return NULL;}

    //
    struct Node* cur = head;
    while(cur){//A -> A'->B->B'..
        struct Node* copy = malloc(sizeof(struct Node));
        //Receive all the attributes of the ker.
        copy->val = cur->val;
        copy->next = cur->next;
        copy->random = NULL;//for now we don't move random, but we need to init it.

        //move to the next of the next
        cur->next = copy;
        cur = copy ->next;
    }

// Step 2: set random pointers
//Random actually means the random node that my node can point to. like A -> B -> C, 
// but A can point to C
    cur = head;//Move back the cur to the head.
    while(cur){
        if(cur->random){//standing on the one with random
            cur->next->random = cur->random->next;//Set the random of copy to be random->next.
        }
        cur = cur->next->next;//Move to the one that needs the random value.
    }

// Step 3: The copy was rooted on the head, so I need a new head.
struct Node* newHead = head->next;
cur = head;
while(cur){
    struct Node* copy = cur->next;
    cur->next = copy ->next;
    copy->next = copy->next ? copy->next->next : NULL;
    cur = cur->next;
}
return newHead;
	
}