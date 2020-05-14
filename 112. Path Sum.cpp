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
    int pathsum=0;
    int flag=0;
    int count=0;
    void DFS(TreeNode* root,int sum,int tar,int h,TreeNode* pre){
        if(root!=NULL){
            sum+=root->val;
            count++;
            pre=root;
            if(root->left!=NULL)
                DFS(root->left,sum,tar,h+1,pre);//2 1 1
            if(root->right!=NULL)
                DFS(root->right,sum,tar,h+1,pre);
            if(root->left==NULL&&root->right==NULL&&tar==sum){
                flag=1;
                return;
            }
        }

    }
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)
            return false;

        DFS(root,0,sum,0,NULL);
        if(flag==1)
            return true;
        
        return false;
    }
};