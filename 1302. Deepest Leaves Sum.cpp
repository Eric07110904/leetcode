/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum = 0;
    map<int,int>record;
    int max_level=0;
    void DFS(TreeNode* root,int level){
        if(root!=NULL){
            
            record[level]+=root->val;
            if(level>max_level)
                max_level = level;
            DFS(root->left,level+1);
            DFS(root->right,level+1);
            
        }
    }
    int deepestLeavesSum(TreeNode* root) {
        DFS(root,0);
        return record[max_level];
    }
};