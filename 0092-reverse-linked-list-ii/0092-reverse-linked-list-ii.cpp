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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *current=head;
        ListNode* prev=NULL;
        for(int i=0;current!=NULL&&i<left-1;i++){
            prev=current;
            current=current->next;
        }
        ListNode* last=prev;
        ListNode* newend=current;
        ListNode* next=current->next;
        for(int i=0;i<right-left+1;i++){
            current->next=prev;
            prev=current;
            current=next;
            if(next)next=next->next;
        }
        if(last)last->next=prev;
        else head=prev;
        newend->next=current;
        return head;
    }
};