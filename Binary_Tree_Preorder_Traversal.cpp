/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> r;
        if(root==NULL){
            return r;
        }
        r.push_back(root->val);
        vector<int> l = preorderTraversal(root->left);
        for(int i=0; i<l.size(); i++){
            r.push_back(l[i]);
        }
        l = preorderTraversal(root->right);
        for(int i=0; i<l.size(); i++){
            r.push_back(l[i]);
        }
        return r;
    }
};