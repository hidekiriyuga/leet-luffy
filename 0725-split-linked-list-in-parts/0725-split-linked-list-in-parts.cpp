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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n=0;
        vector<ListNode*> v;
        ListNode* t=head;
        while(t){
            n++;
            t=t->next;
        }
        int parts=n/k;
        int e=n%k;
        t=head;
        while(t){
            v.push_back(t);
            int curr=1;
            while(curr<parts){
                t=t->next;
                curr++;
            }
            if(e>0 && n>k){
                t=t->next;
                e--;
            }
            ListNode* x=t->next;
            t->next=NULL;
            t=x;
            
        }
        while(n<k){
            v.push_back(NULL);
            n++;
        }
        return v;
    }
};