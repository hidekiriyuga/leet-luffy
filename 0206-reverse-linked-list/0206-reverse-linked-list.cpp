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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
        return NULL;}
        ListNode* curr=head;
        ListNode* p=NULL;
        ListNode* n;
        while(curr!=NULL){
            n=curr->next;
            curr->next=p;
            p=curr;
            curr=n;

        }
        return p;
    }
};