/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* revrsegroup(ListNode*first,ListNode* last){
       ListNode* prev=last;
        while(first !=last){
            ListNode* next=first->next;
            first->next=prev;
            prev=first;
            first=next;
            
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* t=head;
        for(int i=0;i<k;i++){
            if(!t)return head;
            t=t->next;
        }
        ListNode* newHead=revrsegroup(head,t);
        head->next=reverseKGroup(t,k);
        return newHead;
        
    }
};