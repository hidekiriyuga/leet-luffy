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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempb=headB;
        while(tempb!=NULL){
            ListNode *temp=headA;
            while(temp){
                if(temp==tempb)return temp;
                temp=temp->next;
            }
            tempb=tempb->next;
        }
        return NULL;
    }
};