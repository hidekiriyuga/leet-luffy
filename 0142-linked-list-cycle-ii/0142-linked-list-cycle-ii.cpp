/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int lengthcycle(ListNode* head){
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                ListNode* temp=slow;
                int len=0;
                do{
                    temp=temp->next;
                    len++;
                }
                while(temp!=slow);
                return len;
            }
            
        }
        return 0;
    }
    ListNode *detectCycle(ListNode *head) {
        int length=0;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                length=lengthcycle(slow);
                break;
            }
            
    }
        if(length==0)return NULL;
        ListNode* f=head;
        ListNode* s=head;
        while(length>0){
            s=s->next;
            length--;
        }
        while(f!=s){
            f=f->next;
            s=s->next;
        }
        return s;
    }
};