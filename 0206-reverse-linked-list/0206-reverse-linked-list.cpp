
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*prev=nullptr;
        ListNode*curr=head;
        while(curr!=nullptr){
            ListNode*next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
        //here we will use the 3 pointer
        
    }
};