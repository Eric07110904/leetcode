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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* flag=l1; ListNode* flag2=l2;
        ListNode* head=new ListNode(0);ListNode* temp=head;
        while(flag!=NULL||flag2!=NULL){
            ListNode* current;
            if(flag==NULL){
                head->next=flag2;
                break;
                    
            }
            else if(flag2==NULL){
                head->next=flag;
                break;
            }
            if(flag->val<=flag2->val){
                current = new ListNode(flag->val);
                flag=flag->next;
            
            }
            else{
                current=new ListNode(flag2->val);
                flag2=flag2->next;
            }
            //cout<<current->val<<endl;
            head->next=current;
            head=head->next;


        }
       
        temp=temp->next;
        return temp;
        
    }
};