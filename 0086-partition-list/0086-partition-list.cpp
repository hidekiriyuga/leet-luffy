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
    ListNode* partition(ListNode* head, int x) {
        ListNode *leftm=new ListNode(0);
        ListNode *rightm=new ListNode(0);
        ListNode *temp=head;
        ListNode* left=leftm;
        ListNode* right=rightm;
        while(temp){
            if(temp->val<x){
                left->next=temp;
                left=left->next;
            }
            else{
                right->next=temp;
                right=right->next;
            }
            temp=temp->next;
        }
        left->next=rightm->next;
        right->next=NULL;
        return leftm->next;
    }
};