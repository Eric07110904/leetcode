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
    vector<string>ans_array;
    void DFS(TreeNode* root,string ans){
        if(root!=NULL){
            ans+=to_string(root->val);
            if(root->left==NULL&&root->right==NULL){//leaf node 
                ans_array.push_back(ans);
            }
            else{
                ans+="->";
            }
            DFS(root->left,ans);
            DFS(root->right,ans);
        }
        else{
            return;
        }


    }
    vector<string> binaryTreePaths(TreeNode* root) {
        DFS(root,"");
        return ans_array;
    }
};