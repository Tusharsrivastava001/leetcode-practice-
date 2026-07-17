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
    int level(TreeNode*root){
        if(root==nullptr) return 0;
        return 1+max(level(root->left),level(root->right));
    }
    //ye hamme level or height lake dega 
    void nthlevel(TreeNode*root,int curr,int tar,std::vector<int> &v){
        if(root==nullptr) return ;
        if(curr==tar){
            v.push_back(root->val);
        }
        nthlevel(root->left,curr+1,tar,v);
        nthlevel(root->right,curr+1,tar,v);

    }
    void order(TreeNode*root,std::vector<std::vector<int>>&ans ){
        int n=level(root);

        for(int i=1;i<=n;i++){
            std::vector<int> v;
            nthlevel(root,1,i,v);
            ans.push_back(v);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        std::vector<std::vector<int>> ans;
        order(root,ans);
        return ans;

    }
};