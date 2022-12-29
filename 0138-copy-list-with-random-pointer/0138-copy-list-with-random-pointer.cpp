/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp=head;
        while(temp){
            Node* newNode=new Node(temp->val);
            newNode->next=temp->next;
            temp->next=newNode;
            temp=temp->next->next;
        }
        Node* itr=head;
        while(itr){
            if(itr->random){
                itr->next->random=itr->random->next;
                
            }
            itr=itr->next->next;
        }
        Node* dummy=new Node(0);
        temp=dummy;
        itr=head;
        Node* front;
        while(itr){
            front=itr->next->next;
            temp->next=itr->next;
            itr->next=front;
            temp=temp->next;
            itr=front;
        }
        return dummy->next;
        
    }
};