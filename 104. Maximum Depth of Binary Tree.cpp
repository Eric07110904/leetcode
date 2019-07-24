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
    int maxDepth(TreeNode* root) {
        TreeNode* temp=root;
        if(root==NULL)
            return 0;
        if(root->left==NULL&&root->right==NULL)//左右都沒節點的話 代表他是一個node 回傳1
            return 1;
        return 1+max(maxDepth(root->left),maxDepth(root->right));//1 代表樹的根結點
    }
};