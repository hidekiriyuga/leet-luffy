class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        /*if(head->next == NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next=slow->next->next;
        return head;*/
        if(head->next == NULL) return NULL;
        ListNode* slow=head,*fast=head,*prev;
    while(fast && fast->next){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=slow->next;
    return head;
        
    }
};