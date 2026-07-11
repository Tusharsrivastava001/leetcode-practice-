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
    bool isPalindrome(ListNode* head) {
        std::vector<int> v;
        ListNode*temp=head;
        while(temp!=nullptr){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int f=0;
        int l=v.size()-1;
        while(f<=l){
            if(v[f]!=v[l]) return false;
            f++;
            l--;
        }
        return true;
    }
};