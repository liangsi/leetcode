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
    int getBalance(TreeNode *root) {
        if(root == NULL){
            return 0;
        }
        int l = getBalance(root->left);
        int r = getBalance(root->right);
        if(l == -1){
            return -1;
        }
        else if(r == -1){
            return -1;
        }
        else if(l - r > 1 || r - l > 1) {
            return -1;
        }
        if(l>r) return l+1;
        else return r+1;
    }
    bool isBalanced(TreeNode *root) {
        if(root == NULL){
            return true;
        }
        if(getBalance(root) == -1){
            return false;
        }
        return true;
    }
};