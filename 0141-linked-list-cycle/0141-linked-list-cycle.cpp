/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int pos;
class Solution {
public:
    bool hasCycle(struct ListNode *head) {
    /*int i;
    
    for (i = 0; (i < 10000 + 1) && head; ++i, head = head->next);
    
    if (i == 10000 + 1) {
        return true;
    }
    
    return false;*/
        
        
        
    ListNode* fast=head;
    ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)return true;
        }
        return false;
        
}
};