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
    void display(TreeNode*root,int &count){
        if(root==NULL) return ;
        count++;
        display(root->left,count);
        display(root->right,count);
        
    }
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};