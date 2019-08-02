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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return NULL;
        
        ListNode* now=head->next;
        ListNode* pre=head;pre->next=NULL;//地一個元素的next要指向NULL 不然之後會無限迴圈
        ListNode* current;
        while(now!=NULL){
            current=now;
            now=now->next;
            current->next=pre;
            pre=current;
            
        }
        return pre;
    }
};