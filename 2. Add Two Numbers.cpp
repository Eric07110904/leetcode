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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0;ListNode* head=new ListNode(0);
        ListNode* temp=head;
        while(l1->next!=NULL||l2->next!=NULL){
            //temp->next=new ListNode(0);
            sum=0;
            sum=l1->val+l2->val;
            temp->next=new ListNode(0);
            //temp->next->val+=sum/10;
            temp->val+=sum;
            ListNode* t=temp;
            while(temp->val>=10){
                
                temp->val=temp->val%10;
                temp->next->val+=1;
                temp=temp->next;
            }
            temp=t;
            if(l1->next!=NULL)
                l1=l1->next;
            else
                l1->val=0;
            if(l2->next!=NULL)
                l2=l2->next;
            else
                l2->val=0;
            
            temp=temp->next;
        }
        sum=l1->val+l2->val;
        temp->val+=sum;
        while(temp->val>=10){
            temp->next=new ListNode(0);
            temp->val%=10;
            temp->next->val+=1;
            temp=temp->next;
        }
        
        return head;
    }
};