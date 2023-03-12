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
    ListNode* mergeTwoLists(ListNode* &list1, ListNode* list2) {
        ListNode* l=new ListNode();
        ListNode* head=l;
        
        while(list1!=NULL&&list2!=NULL)
    {
        if(list1->val<list2->val)
        {
            l->next=list1;
            list1=list1->next;
        }
        else
        {
            l->next=list2;
            list2=list2->next;
        }
        l=l->next;
    }
    if(list1!=NULL)
    {
        l->next=list1;
    }
    else
    {
        l->next=list2;
    }
    return head->next;
}
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        ListNode* list1=new ListNode(-10000);
        ListNode* head=list1;
        for(int i=0;i<n;i++){
            //if(lists[i]->val==0)continue;
            list1=mergeTwoLists(list1,lists[i]);
        }
        return list1->next;
        
    }
};