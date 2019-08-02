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
public://畫3個節點的binary tree 模擬一遍就行
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        
        TreeNode*temp=root->left;
        root->left=invertTree(root->right);
        root->right=invertTree(temp);
        
        return root;
    }
};