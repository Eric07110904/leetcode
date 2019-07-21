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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head;ListNode* pre;
        temp=head;
        //get count; note:first and last
        while(temp!=NULL){
            
            if(temp->val==val){
                if(temp==head){
                    head=head->next;
                    temp=head;
                    continue;
                }
                pre->next=temp->next;

                temp=pre->next;
            }
            else{
                pre=temp;
                temp=temp->next;
            }
            
        }
        return head;
    }
};