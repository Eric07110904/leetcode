/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {//用這個function 地回
        if(p==NULL&&q==NULL)return true;
        
        if(p==NULL||q==NULL)return false;//一個null 一個沒 代表肯定不一樣
        
        if(p->val!=q->val)return false; ///val 不一樣 return false;
        
        return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);//左邊 右邊都為true就相同
        
    }       
};