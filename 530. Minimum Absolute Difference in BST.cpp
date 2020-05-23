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
    int minimum = 1e9;
    vector<int>record;
    void DFS(TreeNode* root){
        if(root!=NULL){
            record.push_back(root->val);
            DFS(root->left);
            DFS(root->right);
        }
        else{
            return;
        }
    }
    int getMinimumDifference(TreeNode* root) {
        //non-negative values
        DFS(root);
        
        sort(record.begin(),record.end());
        for(int i=0;i<record.size()-1;i++){
            minimum = min(minimum,abs(record[i]-record[i+1]));
        }

        return minimum;
    }
};