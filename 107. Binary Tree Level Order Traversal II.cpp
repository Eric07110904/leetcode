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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*>q;int size;vector<int>v1;vector<vector<int>>ans;
        q.push(root);
        if(root==NULL){
            return {};
        }
        while(!q.empty()){
            size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                v1.push_back(temp->val);
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
                
            }
            ans.push_back(v1);
            v1.clear();
            
            
        }
        std::reverse(ans.begin(),ans.end());
        return ans;
    }
};