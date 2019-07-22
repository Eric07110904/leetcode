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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->next!=NULL)
            if(temp->val==(temp->next)->val){//畫出來看很好懂
                temp->next=temp->next->next;
                temp=temp;
                continue;
            }
            
            temp=temp->next;
            
        }
        return head;
    }
};